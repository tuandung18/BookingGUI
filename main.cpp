#include "menu.h"
#include "travelagency.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    TravelAgency travelAgency;
    travelAgency.readFile("bookings.json");

    //Menu w;
    //w.show();
    //return a.exec();
    return 0;
}
