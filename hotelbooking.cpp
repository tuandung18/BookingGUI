#include "hotelbooking.h"
#include <iostream>
using namespace std;

HotelBooking::HotelBooking(const QString &hotel, const QString &town,
                           const QString &id, double price,
                           const QString &toDate, const QString &fromDate, const QString &roomType)
    : Booking(id, price, toDate, fromDate), hotel(hotel), town(town), roomType(roomType) {}

QString HotelBooking::getRoomType() const
{
    return roomType;
}

QString HotelBooking::getHotel() const
{
    return hotel;
}

QString HotelBooking::getTown() const
{
    return town;
}

QString HotelBooking::showDetails() {
    return QString("Hotelreservierung im " + hotel + " in " + town + " vom "
        + fromDate + " bis zum " + toDate + ". Preis: " + QString::fromStdString(to_string(price)) + " Euro"
                   );
}


BookingType HotelBooking::whoami() const
{
    return BookingType::Hotel;
}
