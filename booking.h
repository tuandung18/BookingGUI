#ifndef BOOKING_H
#define BOOKING_H
#include <string>

class Booking
{
public:
    Booking(const std::string &id, double price, const std::string &toDate, const std::string &fromDate);
    virtual std::string showDetails() = 0;
    virtual ~Booking();
private:
    std::string id;
    double price;
    std::string toDate;
    std::string fromDate;


};

#endif // BOOKING_H
