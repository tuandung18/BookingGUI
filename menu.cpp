#include "menu.h"
#include "ui_menu.h"
#include <travelagency.h>
Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    TravelAgency travelAgency;
    travelAgency.readFile("Booking.json");
}

Menu::~Menu()
{
    delete ui;
}

