#include "travelagency.h"
#include <flightbooking.h>
#include <QJsonDocument>
#include <QJsonArray>
#include <QFile>
#include <QJsonObject>
#include <iostream>
using namespace std;

TravelAgency::TravelAgency()
{

}

void TravelAgency::readFile(QString path)
{
    QFile file (path);
    if (!file.open(QIODevice::ReadOnly)) std::cerr << "Datei  konnte nicht geoeffnet werden";
    QByteArray fileContent = file.readAll();
    file.close();

    QJsonParseError jsonError;
    QJsonDocument doc = QJsonDocument::fromJson(fileContent, &jsonError);

    if(jsonError.error != QJsonParseError::NoError)
        cerr << "fromJson failed" << jsonError.errorString().toStdString() << endl;

    QJsonArray bookings = doc.array();
    for (const auto& element : bookings){
        auto booking= createBooking(element.toObject());


    }
}

QSharedPointer<Booking> TravelAgency::createBooking(QJsonObject obj)
{
    if(obj["Type"].toString() == "Flight")
        return new FlightBooking(obj["fromDest"], obj["toDest"], obj["airline"],
                                 obj["id"], obj["price"], obj["toDate"],
                                 obj["fromDate"]);
}
