#include "menu.h"
#include "ui_menu.h"
#include <QFileDialog>
#include <QListWidget>
#include <booking.h>
#include <editor.h>
#include <travelagency.h>
using namespace std;
Menu::Menu(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Menu), agency(new TravelAgency) {
    ui->setupUi(this);
}

Menu::~Menu() { delete ui; }

void Menu::on_readFile_clicked() {
    QFileDialog browser;
    auto fileName = browser.getOpenFileName(
        this, "Open File", "/Users/tuandl/Qt/QtProjects/BookingGUI", "*.json");
    agency->readFile(fileName);
    bookings = agency->getBookings();
}

void Menu::on_showBookings_clicked() {
    if (bookings.length() != 0) {
        for (const auto &b : bookings) {
            auto *item = new QListWidgetItem;
            item->setText(b->showDetails());
            item->setData(Qt::UserRole, b->getId());
            ui->bookingOutput->addItem(item);
            ui->bookingOutput->setSpacing(2);
        }
    }
}

void Menu::on_bookingOutput_itemDoubleClicked(QListWidgetItem *item) {
    auto editor = new Editor;
    QSharedPointer<Booking> booking =
        agency->findBooking(qvariant_cast<QString>(item->data(Qt::UserRole)));

    //Display tab
    switch (booking->whoami()) {
    case BookingType::Flight:
        editor->setCurrentIndex(0);
        break;
    case BookingType::Car:
        editor->setCurrentIndex(1);
        break;
    case BookingType::Hotel:
        editor->setCurrentIndex(2);
        break;
    case BookingType::Train:
        editor->setCurrentIndex(3);
        break;
    default:
        break;
    }
    int index = editor->currentIndex();
    //Make unused tabs invisible
    for(int i = 0; i < editor->count(); i++){
        if (i != index)
            editor->setTabVisible(i,false);
    }

    //Bind properties
    auto curTab = editor->widget(index);
    editor->show();
}
