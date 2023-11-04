#ifndef TRAINTICKET_H
#define TRAINTICKET_H
#include <booking.h>
#include <memory>
#include <vector>
class TrainTicket: public Booking
{
public:

private:
    std::string fromDest, toDest, departureTime, arrivalTime;
    std::vector<std::string> connectingStations;


    // Booking interface
public:
    TrainTicket(const std::string &fromDest, const std::string &toDest, const std::string &departureTime, const std::string &arrivalTime, const std::vector<std::string> &connectingStations, const std::string &id, double price, const std::string &toDate, const std::string &fromDate);
    std::string showDetails() override;
};

#endif // TRAINTICKET_H
