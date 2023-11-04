#include "flightbooking.h"


FlightBooking::FlightBooking(const std::string &fromDest, const std::string &toDest, const std::string &airline, const std::string &id, double price, const std::string &toDate, const std::string &fromDate) : Booking(id, price, toDate, fromDate),
    fromDest(fromDest),
    toDest(toDest),
    airline(airline)
{}
