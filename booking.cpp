#include "booking.h"


std::string Booking::showDetails()
{

}

Booking::Booking(const std::string &id, double price, const std::string &toDate, const std::string &fromDate) : id(id),
    price(price),
    toDate(toDate),
    fromDate(fromDate)
{}

Booking::~Booking()
{

}
