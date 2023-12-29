#include "customer.h"


void Customer::addTravel(QScopedPointer<Travel> travel)
{

}

long Customer::getId() const
{
    return id;
}

QString Customer::getLastName() const
{
    return lastName;
}

QString Customer::getFirstName() const
{
    return firstName;
}

QVector<QScopedPointer<Travel> > &Customer::getTravelList()
{
    return travelList;
}

Customer::Customer(long id, const QString &lastName, const QString &firstName) : id(id),
    lastName(lastName),
    firstName(firstName)
{}
