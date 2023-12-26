#include "travelagency.h"
#include "hotelbooking.h"
#include "rentalcarreservation.h"
#include "trainticket.h"
#include "booking.h"
#include <QVector>
#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <flightbooking.h>
#include <iostream>
using namespace std;

TravelAgency::TravelAgency() {}

void TravelAgency::readFile(QString path) {
    QFile file(path);
    QByteArray fileContent;
    try{
        file.open(QIODevice::ReadOnly);
        fileContent = file.readAll();
        file.close();
    }catch (const std::exception& e) {
        qDebug() << "Exception: " << e.what();
    }

  //Error checking for parser
  QJsonParseError jsonError;
  QJsonDocument doc = QJsonDocument::fromJson(fileContent, &jsonError);

  if (jsonError.error != QJsonParseError::NoError)
    cerr << "fromJson failed" << jsonError.errorString().toStdString() << endl;

  QJsonArray inputs = doc.array();
  for (const auto &element : inputs) {
    auto booking = createBooking(element.toObject());
    bookings.push_back(booking);
  }
}

QSharedPointer<Booking> TravelAgency::createBooking(QJsonObject obj) {
  if (obj["type"].toString().toStdString() == "Flight"){
    return QSharedPointer<FlightBooking>(
        new FlightBooking(obj["fromDest"].toString(), obj["toDest"].toString(),
                          obj["airline"].toString(), obj["id"].toString(),
                          obj["price"].toDouble(), obj["toDate"].toString(),
                          obj["fromDate"].toString()));
  }
  else if (obj["type"].toString() == "Hotel")
    return QSharedPointer<HotelBooking>(
        new HotelBooking(obj["hotel"].toString(), obj["town"].toString(),
                         obj["id"].toString(), obj["price"].toDouble(),
                         obj["toDate"].toString(), obj["fromDate"].toString()));
  else if (obj["type"].toString() == "RentalCar")
    return QSharedPointer<RentalCarReservation>(new RentalCarReservation(
        obj["pickupLocation"].toString(), obj["returnLocation"].toString(),
        obj["company"].toString(), obj["id"].toString(),
        obj["price"].toDouble(), obj["toDate"].toString(),
        obj["fromDate"].toString()));
  else if (obj["type"].toString() == "Train")
    return QSharedPointer<TrainTicket>(new TrainTicket(
        obj["fromStation"].toString(), obj["toStation"].toString(),
        obj["departureTime"].toString(), obj["arrivalTime"].toString(),
        obj["connectionStation"].toArray(), obj["id"].toString(),
        obj["price"].toDouble(), obj["toDate"].toString(),
        obj["fromDate"].toString()));
}

QVector<QSharedPointer<Booking> > &TravelAgency::getBookings()
{
  return bookings;
}

void TravelAgency::printBookings() const
{
  for (const auto &b : bookings)
    cout<<b->showDetails().toStdString()<<endl;
}

QSharedPointer<Booking> TravelAgency::findBooking(QString id)
{
  //Find_if returns a pointer iterator to the element, extract it's value with '*'
  return *std::find_if(
      bookings.begin(), bookings.end(),
      [id](QSharedPointer<Booking> x) { return x->getId() == id; });
}
