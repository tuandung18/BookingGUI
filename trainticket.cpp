#include "trainticket.h"
#include <iostream>
using namespace std;

QString TrainTicket::showDetails() {
  return QString("Zugticket from " + fromDest + " nach " + toDest + " am "
       + fromDate + " von " + departureTime + " bis " + arrivalTime
                   + " über " + printStations() + ". Preis: " + QString::fromStdString(to_string(price)) + " Euro"
                   );
}

QString TrainTicket::printStations()
{
    QString stations{};
    for (const auto& station : connectingStations)
        stations += station.toString() + ", ";
    return stations;
}


TrainTicket::TrainTicket(const QString &fromDest, const QString &toDest,
                         const QString &departureTime,
                         const QString &arrivalTime,
                         const QJsonArray &connectingStations,
                         const QString &id, double price,
                         const QString &toDate, const QString &fromDate)
    : Booking(id, price, toDate, fromDate), fromDest(fromDest), toDest(toDest),
      departureTime(departureTime), arrivalTime(arrivalTime),
      connectingStations(connectingStations) {}


BookingType TrainTicket::whoami() const
{
    return BookingType::Train;
}
