#include "hotelbooking.h"
#include <iostream>
using namespace std;


HotelBooking::HotelBooking(const std::string &hotel, const std::string &town, const std::string &id, double price, const std::string &toDate, const std::string &fromDate) : Booking(id, price, toDate, fromDate),
    hotel(hotel),
    town(town)
{}

std::string HotelBooking::showDetails() {
  cout << "Hotelreservierung im " << hotel << " in " << town << " vom "
       << fromDate << " bis zum " << toDate << ". Preis: " << price << " Euro"
       << endl;
}
