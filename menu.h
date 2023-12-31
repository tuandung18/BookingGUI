#ifndef MENU_H
#define MENU_H

#include "QtWidgets/qlistwidget.h"
#include "travelagency.h"
#include "ui_editor.h"
#include <QMainWindow>
#include <iostream>
QT_BEGIN_NAMESPACE
namespace Ui { class Menu; }
QT_END_NAMESPACE

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_readFile_clicked();

    void on_showBookings_clicked();

    void on_bookingOutput_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::Menu *ui;
    Ui::Editor *tabUi;
    TravelAgency* agency;
    QVector<QSharedPointer<Booking>> allBookings;
    const int NUMBEROFTYPE = BookingType::Size;
};
#endif // MENU_H
