#ifndef BOOKING_H
#define BOOKING_H
#include <QDebug>
#include <QString>
#include <QTextStream>
#include <string>
enum BookingType { Flight, Car, Hotel, Train, Size };

class Booking {
public:
  Booking(const QString &id, double price, const QString &toDate,
          const QString &fromDate);
  virtual QString showDetails() = 0;
  virtual ~Booking();
  QString getId() const;
  virtual BookingType whoami() const = 0;

  double getPrice() const;
  QString getToDate() const;
  QString getFromDate() const;

protected:
  QString id;
  double price;
  QString toDate;
  QString fromDate;
};

#endif // BOOKING_H
