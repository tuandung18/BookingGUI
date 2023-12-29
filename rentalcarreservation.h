#ifndef RENTALCARRESERVATION_H
#define RENTALCARRESERVATION_H

#include "booking.h"

class RentalCarReservation : public Booking {
public:
private:
  QString pickupLocation, returnLocation, company, vehicleClass;

  // Booking interface
public:
  RentalCarReservation(const QString &pickupLocation,
                       const QString &returnLocation, const QString &company,
                       const QString &id, double price, const QString &toDate,
                       const QString &fromDate, const QString vehicleClass);
  QString showDetails() override;

  // Booking interface
public:
  BookingType whoami() const override;
  QString getPickupLocation() const;
  QString getReturnLocation() const;
  QString getCompany() const;
  QString getVehicleClass() const;
};

#endif // RENTALCARRESERVATION_H
