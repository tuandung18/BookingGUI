#ifndef FLIGHTBOOKING_H
#define FLIGHTBOOKING_H
#include "booking.h"
#include <iostream>

class FlightBooking : public Booking {

public:
private:
    QString fromDest, toDest, airline;

    // Booking interface
public:
  FlightBooking(const QString &fromDest, const QString &toDest,
                const QString &airline, const QString &id, double price,
                const QString &toDate, const QString &fromDate);
  QString showDetails() override;

  // Booking interface
  public:
  BookingType whoami() const override;
};

#endif // FLIGHTBOOKING_H
