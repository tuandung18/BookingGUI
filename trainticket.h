#ifndef TRAINTICKET_H
#define TRAINTICKET_H
#include "QtCore/qjsonarray.h"
#include <booking.h>
#include <memory>
#include <vector>
class TrainTicket : public Booking {
public:
private:
  QString fromDest, toDest, departureTime, arrivalTime;
  QJsonArray connectingStations;

  // Booking interface
public:
  TrainTicket(const QString &fromDest, const QString &toDest,
              const QString &departureTime, const QString &arrivalTime,
              const QJsonArray &connectingStations, const QString &id,
              double price, const QString &toDate, const QString &fromDate);
  QString showDetails() override;
  QString printStations();

  // Booking interface
  public:
  BookingType whoami() const override;
};

#endif // TRAINTICKET_H
