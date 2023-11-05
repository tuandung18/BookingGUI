#ifndef RENTALCARRESERVATION_H
#define RENTALCARRESERVATION_H

#include "booking.h"

class RentalCarReservation : public Booking
{
public:
private:
    QString pickupLocation, returnLocation, company;


    // Booking interface
public:
    RentalCarReservation(const QString &pickupLocation, const QString &returnLocation, const QString &company, const QString &id, double price, const QString &toDate, const QString &fromDate);
    QString showDetails() override;
};

#endif // RENTALCARRESERVATION_H
