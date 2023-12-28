#include "editor.h"
#include "flightbooking.h"
#include "hotelbooking.h"
#include "rentalcarreservation.h"
#include "trainticket.h"

Editor::Editor(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::Editor)
{
    ui->setupUi(this);
}

Editor::~Editor()
{
    delete ui;
}

void Editor::displayTab(QSharedPointer<Booking> booking)
{
    //Display tab
    QString format = "dd/MM/YY";
    switch (booking->whoami()) {
    case BookingType::Flight:{
        auto b = qSharedPointerDynamicCast<FlightBooking>(booking);
        this->setCurrentIndex(0);
        ui->flugID->setText(b->getId());
        ui->flugVon->setDate(QDate::fromString(b->getFromDate(),format));
        ui->flugBis->setDate(QDate::fromString(b->getToDate(),format));
        ui->flugAb->setText(b->getFromDest());
        ui->flugAn->setText(b->getToDest());
        ui->flugFirm->addItem(b->getAirline());
        ui->flugPreis->setValue(b->getPrice());
        break;
    }
    case BookingType::Car:{
        this->setCurrentIndex(1);
        auto b = qSharedPointerDynamicCast<RentalCarReservation>(booking);
        ui->autoID->setText(b->getId());
        ui->autoVon->setDate(QDate::fromString(b->getFromDate(),format));
        ui->autoBis->setDate(QDate::fromString(b->getToDate(),format));
        ui->autoAbhol->setText(b->getPickupLocation());
        ui->autoZurueck->setText(b->getReturnLocation());
        ui->autoFirm->addItem(b->getCompany());
        ui->autoPreis->setValue(b->getPrice());
        break;
    }
    case BookingType::Hotel:{
        this->setCurrentIndex(2);
        auto b = qSharedPointerDynamicCast<HotelBooking>(booking);
        ui->hotelID->setText(b->getId());
        ui->hotelVon->setDate(QDate::fromString(b->getFromDate(),format));
        ui->hotelBis->setDate(QDate::fromString(b->getToDate(),format));
        ui->hotelTown->setText(b->getTown());
        ui->hotelName->setText(b->getHotel());
        ui->hotelPreis->setValue(b->getPrice());
        break;
    }
    case BookingType::Train:{
        this->setCurrentIndex(3);
        auto b = qSharedPointerDynamicCast<TrainTicket>(booking);
        ui->zugID->setText(b->getId());
        ui->zugVon->setDate(QDate::fromString(b->getFromDate(),format));
        ui->zugBis->setDate(QDate::fromString(b->getToDate(),format));
        ui->zugAb->setText(b->getFromDest());
        ui->zugAn->setText(b->getToDest());
        ui->zugUeber->addItems(b->getStations());
        break;
    }
    default:
        break;
    }
    int index = this->currentIndex();
    //Make unused tabs invisible
    for(int i = 0; i < this->count(); i++){
        if (i != index)
            this->setTabVisible(i,false);
    }

}
