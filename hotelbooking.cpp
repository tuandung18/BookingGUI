#include "hotelbooking.h"



HotelBooking::HotelBooking(const std::string &hotel, const std::string &town, const std::string &id, double price, const std::string &toDate, const std::string &fromDate) : Booking(id, price, toDate, fromDate),
    hotel(hotel),
    town(town)
{}
