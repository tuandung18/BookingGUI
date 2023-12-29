#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H
#include "customer.h"
#include "travel.h"
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
    QSharedPointer<Travel> findTravel(long id);
    QSharedPointer<Customer> findCustomer(long id);

    QVector<QSharedPointer<Travel> > &getAllTravels() ;

    QVector<QSharedPointer<Customer> > &getAllCustomers() ;


private:
    QVector<QSharedPointer<Booking>> allBookings;
    QVector<QSharedPointer<Travel>> allTravels;
    QVector<QSharedPointer<Customer>> allCustomers;
};

#endif // TRAVELAGENCY_H
