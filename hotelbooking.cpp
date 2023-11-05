#include "hotelbooking.h"
#include <iostream>
using namespace std;

HotelBooking::HotelBooking(const QString &hotel, const QString &town,
                           const QString &id, double price,
                           const QString &toDate, const QString &fromDate)
    : Booking(id, price, toDate, fromDate), hotel(hotel), town(town) {}

QString HotelBooking::showDetails() {
  cout << "Hotelreservierung im " << hotel.toStdString() << " in " << town.toStdString() << " vom "
       << fromDate.toStdString() << " bis zum " << toDate.toStdString() << ". Preis: " << price << " Euro"
       << endl;
}
