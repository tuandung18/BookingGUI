#include "trainticket.h"



TrainTicket::TrainTicket(const std::string &fromDest, const std::string &toDest, const std::string &departureTime, const std::string &arrivalTime, const std::shared_ptr<std::vector<std::string> > &connectingStations, const std::string &id, double price, const std::string &toDate, const std::string &fromDate) : Booking(id, price, toDate, fromDate),
    fromDest(fromDest),
    toDest(toDest),
    departureTime(departureTime),
    arrivalTime(arrivalTime),
    connectingStations(connectingStations)
{}
