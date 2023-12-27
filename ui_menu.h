/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *readFile;
    QPushButton *showBookings;
    QSpacerItem *horizontalSpacer_2;
    QListWidget *bookingOutput;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(976, 600);
        centralwidget = new QWidget(Menu);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 30, 881, 481));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        readFile = new QPushButton(layoutWidget);
        readFile->setObjectName("readFile");
        readFile->setMinimumSize(QSize(130, 0));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("folder-open")));
        readFile->setIcon(icon);

        horizontalLayout_2->addWidget(readFile);

        showBookings = new QPushButton(layoutWidget);
        showBookings->setObjectName("showBookings");
        showBookings->setMinimumSize(QSize(130, 0));
        showBookings->setFlat(false);

        horizontalLayout_2->addWidget(showBookings);

        horizontalSpacer_2 = new QSpacerItem(278, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        bookingOutput = new QListWidget(layoutWidget);
        bookingOutput->setObjectName("bookingOutput");

        verticalLayout_2->addWidget(bookingOutput);

        Menu->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Menu);
        statusbar->setObjectName("statusbar");
        Menu->setStatusBar(statusbar);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QMainWindow *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Menu", nullptr));
        readFile->setText(QCoreApplication::translate("Menu", "Read File", nullptr));
#if QT_CONFIG(shortcut)
        readFile->setShortcut(QCoreApplication::translate("Menu", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        showBookings->setText(QCoreApplication::translate("Menu", "Show ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
