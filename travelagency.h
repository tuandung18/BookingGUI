#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H
#include <QString>
#include <QSharedMemory>
#include <memory>
#include <vector>
#include <booking.h>
class TravelAgency
{
public:
    TravelAgency();
    void readFile(QString path);
    QSharedPointer<Booking> createBooking(QJsonObject obj);
private:
    std::vector<std::shared_ptr<Booking>> bookings;
};

#endif // TRAVELAGENCY_H
