/********************************************************************************
** Form generated from reading UI file 'osnovmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSNOVMENU_H
#define UI_OSNOVMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OsnovMenu
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *OsnovMenu)
    {
        if (OsnovMenu->objectName().isEmpty())
            OsnovMenu->setObjectName("OsnovMenu");
        OsnovMenu->resize(800, 600);
        OsnovMenu->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        centralwidget = new QWidget(OsnovMenu);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(460, 280, 291, 61));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(460, 200, 291, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(460, 370, 291, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        OsnovMenu->setCentralWidget(centralwidget);

        retranslateUi(OsnovMenu);

        QMetaObject::connectSlotsByName(OsnovMenu);
    } // setupUi

    void retranslateUi(QMainWindow *OsnovMenu)
    {
        OsnovMenu->setWindowTitle(QCoreApplication::translate("OsnovMenu", "OsnovMenu", nullptr));
        pushButton->setText(QCoreApplication::translate("OsnovMenu", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("OsnovMenu", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("OsnovMenu", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OsnovMenu: public Ui_OsnovMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSNOVMENU_H
