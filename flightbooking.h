#ifndef FLIGHTBOOKING_H
#define FLIGHTBOOKING_H
#include "booking.h"
#include <iostream>

class FlightBooking : public Booking {

public:
private:
  QString fromDest, toDest, airline, bookingClass;

  // Booking interface
public:
  FlightBooking(const QString &fromDest, const QString &toDest,
                const QString &airline, const QString &id, double price,
                const QString &toDate, const QString &fromDate,
                const QString &bookingClass);
  QString showDetails() override;

  // Booking interface
public:
  BookingType whoami() const override;
  QString getFromDest() const;
  QString getToDest() const;
  QString getAirline() const;
  QString getBookingClass() const;
};

#endif // FLIGHTBOOKING_H
