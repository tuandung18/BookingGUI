#ifndef HOTELBOOKING_H
#define HOTELBOOKING_H

#include "booking.h"

class HotelBooking : public Booking
{
public:
    HotelBooking(const std::string &hotel, const std::string &town, const std::string &id, double price, const std::string &toDate, const std::string &fromDate);

private:
    std::string hotel, town;

    // Booking interface
public:
    std::string showDetails() override;
};

#endif // HOTELBOOKING_H
