#include "rentalcarreservation.h"
#include <iostream>
using namespace std;

std::string RentalCarReservation::showDetails() {
  cout << "Mietwagenreservierung mit " << company << ". Abholung am "
       << fromDate << " in " << pickupLocation << ". Rückgabe am " << toDate
       << " in " << returnLocation << ". Preis: " << price << " Euro" << endl;
}

RentalCarReservation::RentalCarReservation(const std::string &pickupLocation, const std::string &returnLocation, const std::string &company, const std::string &id, double price, const std::string &toDate, const std::string &fromDate) : Booking(id, price, toDate, fromDate),
    pickupLocation(pickupLocation),
    returnLocation(returnLocation),
    company(company)
{}
