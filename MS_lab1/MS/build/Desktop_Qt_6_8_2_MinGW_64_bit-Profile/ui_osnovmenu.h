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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OsnovMenu
{
public:
    QWidget *centralwidget;
    QPushButton *Nesh;
    QPushButton *MaxMin;
    QPushButton *NLO;
    QLabel *Texting;
    QLabel *IM;

    void setupUi(QMainWindow *OsnovMenu)
    {
        if (OsnovMenu->objectName().isEmpty())
            OsnovMenu->setObjectName("OsnovMenu");
        OsnovMenu->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(80);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OsnovMenu->sizePolicy().hasHeightForWidth());
        OsnovMenu->setSizePolicy(sizePolicy);
        OsnovMenu->setMinimumSize(QSize(800, 600));
        OsnovMenu->setMaximumSize(QSize(800, 600));
        OsnovMenu->setSizeIncrement(QSize(0, 0));
        OsnovMenu->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        centralwidget = new QWidget(OsnovMenu);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        Nesh = new QPushButton(centralwidget);
        Nesh->setObjectName("Nesh");
        Nesh->setGeometry(QRect(21, 391, 300, 60));
        Nesh->setMinimumSize(QSize(0, 60));
        QFont font;
        font.setPointSize(12);
        Nesh->setFont(font);
        Nesh->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);"));
        MaxMin = new QPushButton(centralwidget);
        MaxMin->setObjectName("MaxMin");
        MaxMin->setGeometry(QRect(21, 207, 300, 60));
        MaxMin->setMinimumSize(QSize(0, 60));
        MaxMin->setFont(font);
        MaxMin->setStyleSheet(QString::fromUtf8("border-color: transparent;\n"
"color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        NLO = new QPushButton(centralwidget);
        NLO->setObjectName("NLO");
        NLO->setGeometry(QRect(21, 299, 300, 60));
        NLO->setMinimumSize(QSize(0, 60));
        NLO->setFont(font);
        NLO->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);"));
        Texting = new QLabel(centralwidget);
        Texting->setObjectName("Texting");
        Texting->setGeometry(QRect(20, 90, 360, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Papyrus")});
        font1.setPointSize(14);
        font1.setBold(false);
        Texting->setFont(font1);
        Texting->setAutoFillBackground(false);
        Texting->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        Texting->setTextFormat(Qt::TextFormat::RichText);
        IM = new QLabel(centralwidget);
        IM->setObjectName("IM");
        IM->setGeometry(QRect(370, 200, 400, 250));
        IM->setMinimumSize(QSize(400, 250));
        IM->setMaximumSize(QSize(400, 250));
        IM->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        OsnovMenu->setCentralWidget(centralwidget);

        retranslateUi(OsnovMenu);

        QMetaObject::connectSlotsByName(OsnovMenu);
    } // setupUi

    void retranslateUi(QMainWindow *OsnovMenu)
    {
        OsnovMenu->setWindowTitle(QCoreApplication::translate("OsnovMenu", "OsnovMenu", nullptr));
        Nesh->setText(QCoreApplication::translate("OsnovMenu", "\320\237\320\276\320\270\321\201\320\272 \321\200\320\260\320\262\320\275\320\276\320\262\320\265\321\201\320\270\321\217 \320\277\320\276 \320\235\321\215\321\210\321\203", nullptr));
        MaxMin->setText(QCoreApplication::translate("OsnovMenu", "\320\237\320\276\320\270\321\201\320\272 \320\274\320\260\320\272\321\201\320\270\320\274\320\270\320\275\320\260/\320\274\320\270\320\275\320\270\320\274\320\260\320\272\321\201\320\260", nullptr));
        NLO->setText(QCoreApplication::translate("OsnovMenu", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\235\320\233\320\236 \321\201\321\202\321\200\320\260\321\202\320\265\320\263\320\270\320\271", nullptr));
        Texting->setText(QCoreApplication::translate("OsnovMenu", "\320\241\320\264\320\265\320\273\320\260\320\271\321\202\320\265 \320\262\321\213\320\261\320\276\321\200, \321\207\321\202\320\276 \320\262\321\213 \321\205\320\276\321\202\320\270\321\202\320\265 \321\201\320\264\320\265\320\273\320\260\321\202\321\214", nullptr));
        IM->setText(QCoreApplication::translate("OsnovMenu", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OsnovMenu: public Ui_OsnovMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSNOVMENU_H
