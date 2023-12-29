#include "menu.h"
#include "flightbooking.h"
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
    allBookings = agency->getBookings();
}

void Menu::on_showBookings_clicked() {
    if (allBookings.length() != 0) {
        for (const auto &b : allBookings) {
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
    editor->displayTab(booking);
    editor->show();
}
