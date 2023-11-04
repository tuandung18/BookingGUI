#ifndef FLIGHTBOOKING_H
#define FLIGHTBOOKING_H

#include "booking.h"

class FlightBooking : public Booking {

public:
private:
    std::string fromDest, toDest, airline;

    // Booking interface
public:
    FlightBooking(const std::string &fromDest, const std::string &toDest, const std::string &airline, const std::string &id, double price, const std::string &toDate, const std::string &fromDate);
    std::string showDetails() override;
};

#endif // FLIGHTBOOKING_H
