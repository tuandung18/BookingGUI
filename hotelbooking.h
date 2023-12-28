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

    // Booking interface
public:
    BookingType whoami() const override;
    QString getHotel() const;
    QString getTown() const;
};

#endif // HOTELBOOKING_H
