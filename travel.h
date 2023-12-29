#ifndef TRAVEL_H
#define TRAVEL_H


#include "booking.h"
class Travel
{
public:
    Travel(long customerID, long id);


    void addBooking(QScopedPointer<Booking> booking);
    long getCustomerID() const;
    long getId() const;
    QVector<QScopedPointer<Booking> > &getTravelBookings();

private:
    long customerID, id;
    QVector<QScopedPointer<Booking>> travelBookings;
};

#endif // TRAVEL_H
