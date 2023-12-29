#include "trainticket.h"
#include <iostream>
using namespace std;

QString TrainTicket::showDetails() {
  return QString("Zugticket from " + fromDest + " nach " + toDest + " am " +
                 fromDate + " von " + departureTime + " bis " + arrivalTime +
                 " über " + printStations() + ". Preis: " +
                 QString::fromStdString(to_string(price)) + " Euro");
}

QString TrainTicket::printStations() {
  QString result;
  for (const auto &station : stations){
      result += station;
      if(station != stations.back())
        result += ", ";
  }
  return result;
}

QString TrainTicket::getFromDest() const { return fromDest; }

QString TrainTicket::getToDest() const { return toDest; }

QString TrainTicket::getDepartureTime() const { return departureTime; }

QString TrainTicket::getArrivalTime() const { return arrivalTime; }



QVector<QString> &TrainTicket::getStations() { return stations; }

QString TrainTicket::getBookingClass() const
{
  return bookingClass;
}

TrainTicket::TrainTicket(const QString &fromDest, const QString &toDest,
                         const QString &departureTime,
                         const QString &arrivalTime,
                         const QJsonArray &connectingStations,
                         const QString &id, double price, const QString &toDate,
                         const QString &fromDate, const QString &bookingClass)
    : Booking(id, price, toDate, fromDate), fromDest(fromDest), toDest(toDest),
      departureTime(departureTime), arrivalTime(arrivalTime),
    bookingClass(bookingClass), connectingStations(connectingStations) {
  for (auto const &s : connectingStations)
    stations.push_back(s.toString());
}

BookingType TrainTicket::whoami() const { return BookingType::Train; }
