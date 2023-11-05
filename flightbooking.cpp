#include "flightbooking.h"
#include <iostream>

using namespace std;

FlightBooking::FlightBooking(const QString &fromDest,
                             const QString &toDest,
                             const QString &airline, const QString &id,
                             double price, const QString &toDate,
                             const QString &fromDate)
    : Booking(id, price, toDate, fromDate), fromDest(fromDest), toDest(toDest),
      airline(airline) {}

QString FlightBooking::showDetails() {
  std::cout << "Flugbuchung von " << fromDest.toStdString() << " nach " << toDest.toStdString() << " mit "
            << airline.toStdString() << " am " << fromDate.toStdString() << ". Preis: " << price << " Euro"
            << endl;
}
