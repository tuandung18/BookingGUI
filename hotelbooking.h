#ifndef HOTELBOOKING_H
#define HOTELBOOKING_H

#include "booking.h"

class HotelBooking : public Booking
{
public:
    HotelBooking(const QString &hotel, const QString &town, const QString &id, double price, const QString &toDate, const QString &fromDate);

private:
    QString hotel, town;

    // Booking interface
public:
    QString showDetails() override;
};

#endif // HOTELBOOKING_H
