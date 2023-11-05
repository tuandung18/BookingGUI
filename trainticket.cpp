#include "trainticket.h"
#include <iostream>
using namespace std;

QString TrainTicket::showDetails() {
  cout << "Zugticket from " << fromDest.toStdString() << " nach " << toDest.toStdString() << " am "
       << fromDate.toStdString() << " von " << departureTime.toStdString()<< " bis " << arrivalTime.toStdString()
       << " über " << printStations().toStdString() << ". Preis: " << price << " Euro"
       << endl;
}

QString TrainTicket::printStations()
{
    QString stations{};
    for (const auto& station : connectingStations)
        stations += station + ", ";
    return stations;
}


TrainTicket::TrainTicket(const QString &fromDest, const QString &toDest,
                         const QString &departureTime,
                         const QString &arrivalTime,
                         const std::vector<QString> &connectingStations,
                         const QString &id, double price,
                         const QString &toDate, const QString &fromDate)
    : Booking(id, price, toDate, fromDate), fromDest(fromDest), toDest(toDest),
      departureTime(departureTime), arrivalTime(arrivalTime),
      connectingStations(connectingStations) {}
