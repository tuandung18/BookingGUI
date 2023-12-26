#include "menu.h"
#include "ui_menu.h"
#include <QFileDialog>
#include <QListWidget>
#include <booking.h>
#include <editor.h>
#include <travelagency.h>
Menu::Menu(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Menu), agency(new TravelAgency),
      bookings(agency->getBookings()) {
  ui->setupUi(this);
}

Menu::~Menu() { delete ui; }

void Menu::on_readFile_clicked() {
  QFileDialog browser;
  QString fileName = browser.getOpenFileName(
      this, "Open File", "/Users/tuandl/Qt/QtProjects/BookingGUI", "*.json");
  agency->readFile(fileName);
}

void Menu::on_showBookings_clicked() {
  if (bookings.length() != 0) {
    for (const auto &b : bookings) {
      QListWidgetItem item;
      ui->bookingOutput->addItem(b->showDetails());
      ui->bookingOutput->setSpacing(2);
    }
  }
}

void Menu::on_bookingOutput_itemDoubleClicked(QListWidgetItem *item) {
  auto editor = new Editor;
  editor->show();
}
