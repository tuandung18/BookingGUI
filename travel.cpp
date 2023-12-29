#include "travel.h"


void Travel::addBooking(QScopedPointer<Booking> booking)
{

}

long Travel::getCustomerID() const
{
    return customerID;
}

long Travel::getId() const
{
    return id;
}

QVector<QScopedPointer<Booking> > &Travel::getTravelBookings()
{
    return travelBookings;
}

Travel::Travel(long customerID, long id) : customerID(customerID),
    id(id)
{}
