#include "booking.h"
#include <iostream>
#include <ostream>




Booking::Booking(const QString &id, double price, const QString &toDate, const QString &fromDate) : id(id),
    price(price),
    toDate(toDate),
    fromDate(fromDate)
{}

Booking::~Booking()
{

}
