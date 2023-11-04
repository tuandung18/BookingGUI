#ifndef TRAVELAGENCY_H
#define TRAVELAGENCY_H
#include <memory>
#include <vector>
#include <booking.h>
class TravelAgency
{
public:
    TravelAgency();
private:
    std::vector<std::shared_ptr<Booking>> bookings;
};

#endif // TRAVELAGENCY_H
