#ifndef BOOKING_H
#define BOOKING_H
#include <string>
#include <QString>
#include <QDebug>
#include <QTextStream>
class Booking
{
public:
    Booking(const QString &id, double price, const QString &toDate, const QString &fromDate);
    virtual QString showDetails() = 0;
    virtual ~Booking();
    QString getId() const;

protected:
    QString id;
    double price;
    QString toDate;
    QString fromDate;


};

#endif // BOOKING_H
