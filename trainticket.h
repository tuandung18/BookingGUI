#ifndef TRAINTICKET_H
#define TRAINTICKET_H
#include <booking.h>
#include <memory>
#include <vector>
class TrainTicket: public Booking
{
public:
    TrainTicket(const std::string &fromDest, const std::string &toDest, const std::string &departureTime, const std::string &arrivalTime, const std::shared_ptr<std::vector<std::string> > &connectingStations, const std::string &id, double price, const std::string &toDate, const std::string &fromDate);

private:
    std::string fromDest, toDest, departureTime, arrivalTime;
    std::shared_ptr<std::vector<std::string>> connectingStations;


    // Booking interface
public:
    std::string showDetails() override;
};

#endif // TRAINTICKET_H
