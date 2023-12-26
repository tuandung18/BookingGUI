#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H
#include <QString>
#include <QSharedMemory>
#include <memory>
#include <vector>
#include <booking.h>
#include <algorithm>
class TravelAgency
{
public:
    TravelAgency();
    void readFile(QString path);
    QSharedPointer<Booking> createBooking(QJsonObject obj);
    QVector<QSharedPointer<Booking> > &getBookings();
    void printBookings() const;
    QSharedPointer<Booking> findBooking(QString id);

private:
    QVector<QSharedPointer<Booking>> bookings;
};

#endif // TRAVELAGENCY_H
