/********************************************************************************
** Form generated from reading UI file 'editor.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_H
#define UI_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Editor
{
public:
    QWidget *flug;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *flugAb;
    QLineEdit *flugAn;
    QDoubleSpinBox *flugPreis;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLineEdit *flugID;
    QWidget *layoutWidget_10;
    QVBoxLayout *verticalLayout_12;
    QDateTimeEdit *flugVon;
    QDateTimeEdit *flugBis;
    QListWidget *flugFirm;
    QWidget *car;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *autoAbhol;
    QLineEdit *autoZurueck;
    QDoubleSpinBox *autoPreis;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLineEdit *autoID;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_9;
    QDateTimeEdit *autoVon;
    QDateTimeEdit *autoBis;
    QListWidget *autoFirm;
    QWidget *hotel;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *hotelName;
    QLineEdit *hotelTown;
    QDoubleSpinBox *hotelPreis;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *hotelID;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QDateTimeEdit *hotelVon;
    QDateTimeEdit *hotelBis;
    QWidget *zug;
    QLineEdit *zugID;
    QDoubleSpinBox *zugPreis;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QDateTimeEdit *zugVon;
    QDateTimeEdit *zugBis;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *zugAb;
    QLineEdit *zugAn;
    QListWidget *zugUeber;

    void setupUi(QTabWidget *Editor)
    {
        if (Editor->objectName().isEmpty())
            Editor->setObjectName("Editor");
        Editor->resize(739, 607);
        flug = new QWidget();
        flug->setObjectName("flug");
        layoutWidget_8 = new QWidget(flug);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(170, 260, 191, 141));
        verticalLayout_10 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        flugAb = new QLineEdit(layoutWidget_8);
        flugAb->setObjectName("flugAb");

        verticalLayout_10->addWidget(flugAb);

        flugAn = new QLineEdit(layoutWidget_8);
        flugAn->setObjectName("flugAn");

        verticalLayout_10->addWidget(flugAn);

        flugPreis = new QDoubleSpinBox(flug);
        flugPreis->setObjectName("flugPreis");
        flugPreis->setGeometry(QRect(170, 230, 111, 22));
        layoutWidget_9 = new QWidget(flug);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(90, 52, 63, 381));
        verticalLayout_11 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget_9);
        label_22->setObjectName("label_22");

        verticalLayout_11->addWidget(label_22);

        label_23 = new QLabel(layoutWidget_9);
        label_23->setObjectName("label_23");

        verticalLayout_11->addWidget(label_23);

        label_24 = new QLabel(layoutWidget_9);
        label_24->setObjectName("label_24");

        verticalLayout_11->addWidget(label_24);

        label_25 = new QLabel(layoutWidget_9);
        label_25->setObjectName("label_25");

        verticalLayout_11->addWidget(label_25);

        label_26 = new QLabel(layoutWidget_9);
        label_26->setObjectName("label_26");

        verticalLayout_11->addWidget(label_26);

        label_27 = new QLabel(layoutWidget_9);
        label_27->setObjectName("label_27");

        verticalLayout_11->addWidget(label_27);

        label_28 = new QLabel(layoutWidget_9);
        label_28->setObjectName("label_28");

        verticalLayout_11->addWidget(label_28);

        flugID = new QLineEdit(flug);
        flugID->setObjectName("flugID");
        flugID->setGeometry(QRect(170, 50, 401, 41));
        layoutWidget_10 = new QWidget(flug);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(170, 100, 161, 121));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_10);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        flugVon = new QDateTimeEdit(layoutWidget_10);
        flugVon->setObjectName("flugVon");

        verticalLayout_12->addWidget(flugVon);

        flugBis = new QDateTimeEdit(layoutWidget_10);
        flugBis->setObjectName("flugBis");

        verticalLayout_12->addWidget(flugBis);

        flugFirm = new QListWidget(flug);
        flugFirm->setObjectName("flugFirm");
        flugFirm->setGeometry(QRect(170, 400, 401, 41));
        Editor->addTab(flug, QString());
        car = new QWidget();
        car->setObjectName("car");
        layoutWidget_5 = new QWidget(car);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(170, 260, 191, 141));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        autoAbhol = new QLineEdit(layoutWidget_5);
        autoAbhol->setObjectName("autoAbhol");

        verticalLayout_7->addWidget(autoAbhol);

        autoZurueck = new QLineEdit(layoutWidget_5);
        autoZurueck->setObjectName("autoZurueck");

        verticalLayout_7->addWidget(autoZurueck);

        autoPreis = new QDoubleSpinBox(car);
        autoPreis->setObjectName("autoPreis");
        autoPreis->setGeometry(QRect(170, 230, 111, 22));
        layoutWidget_6 = new QWidget(car);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(90, 52, 63, 381));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget_6);
        label_15->setObjectName("label_15");

        verticalLayout_8->addWidget(label_15);

        label_16 = new QLabel(layoutWidget_6);
        label_16->setObjectName("label_16");

        verticalLayout_8->addWidget(label_16);

        label_17 = new QLabel(layoutWidget_6);
        label_17->setObjectName("label_17");

        verticalLayout_8->addWidget(label_17);

        label_18 = new QLabel(layoutWidget_6);
        label_18->setObjectName("label_18");

        verticalLayout_8->addWidget(label_18);

        label_19 = new QLabel(layoutWidget_6);
        label_19->setObjectName("label_19");

        verticalLayout_8->addWidget(label_19);

        label_20 = new QLabel(layoutWidget_6);
        label_20->setObjectName("label_20");

        verticalLayout_8->addWidget(label_20);

        label_21 = new QLabel(layoutWidget_6);
        label_21->setObjectName("label_21");

        verticalLayout_8->addWidget(label_21);

        autoID = new QLineEdit(car);
        autoID->setObjectName("autoID");
        autoID->setGeometry(QRect(170, 50, 401, 41));
        layoutWidget_7 = new QWidget(car);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(170, 100, 161, 121));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        autoVon = new QDateTimeEdit(layoutWidget_7);
        autoVon->setObjectName("autoVon");

        verticalLayout_9->addWidget(autoVon);

        autoBis = new QDateTimeEdit(layoutWidget_7);
        autoBis->setObjectName("autoBis");

        verticalLayout_9->addWidget(autoBis);

        autoFirm = new QListWidget(car);
        autoFirm->setObjectName("autoFirm");
        autoFirm->setGeometry(QRect(170, 400, 401, 41));
        Editor->addTab(car, QString());
        hotel = new QWidget();
        hotel->setObjectName("hotel");
        layoutWidget_2 = new QWidget(hotel);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(170, 260, 191, 141));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        hotelName = new QLineEdit(layoutWidget_2);
        hotelName->setObjectName("hotelName");

        verticalLayout_4->addWidget(hotelName);

        hotelTown = new QLineEdit(layoutWidget_2);
        hotelTown->setObjectName("hotelTown");

        verticalLayout_4->addWidget(hotelTown);

        hotelPreis = new QDoubleSpinBox(hotel);
        hotelPreis->setObjectName("hotelPreis");
        hotelPreis->setGeometry(QRect(170, 230, 111, 22));
        layoutWidget_3 = new QWidget(hotel);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(90, 52, 63, 381));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName("label_8");

        verticalLayout_5->addWidget(label_8);

        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName("label_9");

        verticalLayout_5->addWidget(label_9);

        label_10 = new QLabel(layoutWidget_3);
        label_10->setObjectName("label_10");

        verticalLayout_5->addWidget(label_10);

        label_11 = new QLabel(layoutWidget_3);
        label_11->setObjectName("label_11");

        verticalLayout_5->addWidget(label_11);

        label_12 = new QLabel(layoutWidget_3);
        label_12->setObjectName("label_12");

        verticalLayout_5->addWidget(label_12);

        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName("label_13");

        verticalLayout_5->addWidget(label_13);

        label_14 = new QLabel(layoutWidget_3);
        label_14->setObjectName("label_14");

        verticalLayout_5->addWidget(label_14);

        hotelID = new QLineEdit(hotel);
        hotelID->setObjectName("hotelID");
        hotelID->setGeometry(QRect(170, 50, 401, 41));
        layoutWidget_4 = new QWidget(hotel);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(170, 100, 161, 121));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        hotelVon = new QDateTimeEdit(layoutWidget_4);
        hotelVon->setObjectName("hotelVon");

        verticalLayout_6->addWidget(hotelVon);

        hotelBis = new QDateTimeEdit(layoutWidget_4);
        hotelBis->setObjectName("hotelBis");

        verticalLayout_6->addWidget(hotelBis);

        Editor->addTab(hotel, QString());
        zug = new QWidget();
        zug->setObjectName("zug");
        zugID = new QLineEdit(zug);
        zugID->setObjectName("zugID");
        zugID->setGeometry(QRect(170, 50, 401, 41));
        zugPreis = new QDoubleSpinBox(zug);
        zugPreis->setObjectName("zugPreis");
        zugPreis->setGeometry(QRect(170, 230, 111, 22));
        layoutWidget = new QWidget(zug);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(170, 100, 161, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        zugVon = new QDateTimeEdit(layoutWidget);
        zugVon->setObjectName("zugVon");

        verticalLayout->addWidget(zugVon);

        zugBis = new QDateTimeEdit(layoutWidget);
        zugBis->setObjectName("zugBis");

        verticalLayout->addWidget(zugBis);

        layoutWidget1 = new QWidget(zug);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(90, 52, 63, 381));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName("label_7");

        verticalLayout_2->addWidget(label_7);

        layoutWidget2 = new QWidget(zug);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(170, 260, 191, 141));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        zugAb = new QLineEdit(layoutWidget2);
        zugAb->setObjectName("zugAb");

        verticalLayout_3->addWidget(zugAb);

        zugAn = new QLineEdit(layoutWidget2);
        zugAn->setObjectName("zugAn");

        verticalLayout_3->addWidget(zugAn);

        zugUeber = new QListWidget(zug);
        zugUeber->setObjectName("zugUeber");
        zugUeber->setGeometry(QRect(170, 400, 401, 101));
        Editor->addTab(zug, QString());

        retranslateUi(Editor);

        Editor->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Editor);
    } // setupUi

    void retranslateUi(QTabWidget *Editor)
    {
        Editor->setWindowTitle(QCoreApplication::translate("Editor", "TabWidget", nullptr));
        label_22->setText(QCoreApplication::translate("Editor", "ID", nullptr));
        label_23->setText(QCoreApplication::translate("Editor", "von", nullptr));
        label_24->setText(QCoreApplication::translate("Editor", "bis", nullptr));
        label_25->setText(QCoreApplication::translate("Editor", "Preis", nullptr));
        label_26->setText(QCoreApplication::translate("Editor", "Abfahrt", nullptr));
        label_27->setText(QCoreApplication::translate("Editor", "Ankunft ", nullptr));
        label_28->setText(QCoreApplication::translate("Editor", "Airline", nullptr));
        Editor->setTabText(Editor->indexOf(flug), QCoreApplication::translate("Editor", "Flugbuchung", nullptr));
        label_15->setText(QCoreApplication::translate("Editor", "ID", nullptr));
        label_16->setText(QCoreApplication::translate("Editor", "von", nullptr));
        label_17->setText(QCoreApplication::translate("Editor", "bis", nullptr));
        label_18->setText(QCoreApplication::translate("Editor", "Preis", nullptr));
        label_19->setText(QCoreApplication::translate("Editor", "Abholen", nullptr));
        label_20->setText(QCoreApplication::translate("Editor", "Zur\303\274ck", nullptr));
        label_21->setText(QCoreApplication::translate("Editor", "Firma", nullptr));
        Editor->setTabText(Editor->indexOf(car), QCoreApplication::translate("Editor", "Autobuchung", nullptr));
        label_8->setText(QCoreApplication::translate("Editor", "ID", nullptr));
        label_9->setText(QCoreApplication::translate("Editor", "von", nullptr));
        label_10->setText(QCoreApplication::translate("Editor", "bis", nullptr));
        label_11->setText(QCoreApplication::translate("Editor", "Preis", nullptr));
        label_12->setText(QCoreApplication::translate("Editor", "Hotel", nullptr));
        label_13->setText(QCoreApplication::translate("Editor", "Town", nullptr));
        label_14->setText(QString());
        hotelID->setText(QString());
        Editor->setTabText(Editor->indexOf(hotel), QCoreApplication::translate("Editor", "Hotelbuchung", nullptr));
        label->setText(QCoreApplication::translate("Editor", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("Editor", "von", nullptr));
        label_2->setText(QCoreApplication::translate("Editor", "bis", nullptr));
        label_5->setText(QCoreApplication::translate("Editor", "Preis", nullptr));
        label_4->setText(QCoreApplication::translate("Editor", "Abfahrt ", nullptr));
        label_6->setText(QCoreApplication::translate("Editor", "Ankunft", nullptr));
        label_7->setText(QCoreApplication::translate("Editor", "\303\274ber", nullptr));
        Editor->setTabText(Editor->indexOf(zug), QCoreApplication::translate("Editor", "Zugbuchung", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Editor: public Ui_Editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_H
