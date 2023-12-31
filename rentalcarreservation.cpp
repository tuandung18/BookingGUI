#include "rentalcarreservation.h"
#include <iostream>
using namespace std;

QString RentalCarReservation::showDetails() {
return QString("Mietwagenreservierung mit " + company + ". Abholung am "
       + fromDate + " in " + pickupLocation + ". Rückgabe am " + toDate
            + " in " + returnLocation + ". Preis: " + QString::fromStdString(to_string(price)) + " Euro");
}

QString RentalCarReservation::getPickupLocation() const
{
return pickupLocation;
}

QString RentalCarReservation::getReturnLocation() const
{
return returnLocation;
}

QString RentalCarReservation::getCompany() const
{
return company;
}

QString RentalCarReservation::getVehicleClass() const
{
return vehicleClass;
}

RentalCarReservation::RentalCarReservation(const QString &pickupLocation, const QString &returnLocation, const QString &company, const QString &id, double price, const QString &toDate, const QString &fromDate, const QString vehicleClass) : Booking(id, price, toDate, fromDate),
    pickupLocation(pickupLocation),
    returnLocation(returnLocation),
    company(company),
    vehicleClass(vehicleClass)
{}

BookingType RentalCarReservation::whoami() const { return BookingType::Car; }
