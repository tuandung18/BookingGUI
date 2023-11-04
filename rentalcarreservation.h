#ifndef RENTALCARRESERVATION_H
#define RENTALCARRESERVATION_H

#include "booking.h"

class RentalCarReservation : public Booking
{
public:
private:
    std::string pickupLocation, returnLocation, company;


    // Booking interface
public:
    RentalCarReservation(const std::string &pickupLocation, const std::string &returnLocation, const std::string &company, const std::string &id, double price, const std::string &toDate, const std::string &fromDate);
    std::string showDetails() override;
};

#endif // RENTALCARRESERVATION_H
