#include "rentalcarreservation.h"
#include <iostream>
using namespace std;

QString RentalCarReservation::showDetails() {
  cout << "Mietwagenreservierung mit " << company.toStdString() << ". Abholung am "
       << fromDate.toStdString() << " in " << pickupLocation.toStdString() << ". Rückgabe am " << toDate.toStdString()
       << " in " << returnLocation.toStdString() << ". Preis: " << price << " Euro" << endl;
}

RentalCarReservation::RentalCarReservation(const QString &pickupLocation, const QString &returnLocation, const QString &company, const QString &id, double price, const QString &toDate, const QString &fromDate) : Booking(id, price, toDate, fromDate),
    pickupLocation(pickupLocation),
    returnLocation(returnLocation),
    company(company)
{}
