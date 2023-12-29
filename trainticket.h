#ifndef TRAINTICKET_H
#define TRAINTICKET_H
#include "QtCore/qjsonarray.h"
#include <booking.h>
#include <memory>
#include <vector>
class TrainTicket : public Booking {
public:
private:
  QString fromDest, toDest, departureTime, arrivalTime, bookingClass;
  QJsonArray connectingStations;
  QVector<QString> stations;
  // Booking interface
public:
  TrainTicket(const QString &fromDest, const QString &toDest,
              const QString &departureTime, const QString &arrivalTime,
              const QJsonArray &connectingStations, const QString &id,
              double price, const QString &toDate, const QString &fromDateconst,
              const QString &bookingClass);
  QString showDetails() override;
  QString printStations();

  // Booking interface
public:
  BookingType whoami() const override;
  QString getFromDest() const;
  QString getToDest() const;
  QString getDepartureTime() const;
  QString getArrivalTime() const;
  QVector<QString> &getStations();
  QString getBookingClass() const;
};

#endif // TRAINTICKET_H
