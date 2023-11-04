#include "rentalcarreservation.h"


std::string RentalCarReservation::showDetails()
{

}


RentalCarReservation::RentalCarReservation(const std::string &pickupLocation, const std::string &returnLocation, const std::string &company, const std::string &id, double price, const std::string &toDate, const std::string &fromDate) : Booking(id, price, toDate, fromDate),
    pickupLocation(pickupLocation),
    returnLocation(returnLocation),
    company(company)
{}
