#ifndef CUSTOMER_H
#define CUSTOMER_H


#include "QtCore/QScopedPointer"
#include "travel.h"
#include "QString"
class Customer
{
public:
    Customer(long id, const QString &lastName, const QString &firstName);

    void addTravel(QScopedPointer<Travel> travel);
    long getId() const;
    QString getLastName() const;
    QString getFirstName() const;
    QVector<QScopedPointer<Travel> > &getTravelList();

private:
    long id;
    QString lastName, firstName;
    QVector<QScopedPointer<Travel>> travelList;

};

#endif // CUSTOMER_H
