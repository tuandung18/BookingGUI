#include "flightbooking.h"
#include <iostream>

using namespace std;

QString FlightBooking::getFromDest() const
{
    return fromDest;
}

QString FlightBooking::getToDest() const
{
    return toDest;
}

QString FlightBooking::getAirline() const
{
    return airline;
}

FlightBooking::FlightBooking(const QString &fromDest,
                             const QString &toDest,
                             const QString &airline, const QString &id,
                             double price, const QString &toDate,
                             const QString &fromDate)
    : Booking(id, price, toDate, fromDate), fromDest(fromDest), toDest(toDest),
      airline(airline) {}

QString FlightBooking::showDetails() {
  return QString("Flugbuchung von " + fromDest + " nach " + toDest + " mit "
                   + airline + " am " + fromDate + ". Preis: " + QString::fromStdString(to_string(price)) + " Euro"
                   );
}


BookingType FlightBooking::whoami() const
{
  return BookingType::Flight;
}
