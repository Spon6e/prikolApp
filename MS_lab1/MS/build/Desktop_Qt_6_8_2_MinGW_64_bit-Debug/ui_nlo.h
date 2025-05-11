/********************************************************************************
** Form generated from reading UI file 'nlo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NLO_H
#define UI_NLO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NLO
{
public:
    QWidget *centralwidget;
    QLineEdit *line_heigth;
    QLabel *label_matrix;
    QLineEdit *line_width;
    QLabel *label_heigth;
    QLabel *label_width;
    QPushButton *ButtonTable;
    QWidget *widget;
    QPushButton *ButtonStrategy;
    QTableWidget *tableNLO;

    void setupUi(QMainWindow *NLO)
    {
        if (NLO->objectName().isEmpty())
            NLO->setObjectName("NLO");
        NLO->resize(800, 600);
        NLO->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 74, 74);"));
        centralwidget = new QWidget(NLO);
        centralwidget->setObjectName("centralwidget");
        line_heigth = new QLineEdit(centralwidget);
        line_heigth->setObjectName("line_heigth");
        line_heigth->setGeometry(QRect(20, 280, 201, 31));
        QFont font;
        font.setPointSize(18);
        line_heigth->setFont(font);
        line_heigth->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 100, 100);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_matrix = new QLabel(centralwidget);
        label_matrix->setObjectName("label_matrix");
        label_matrix->setGeometry(QRect(270, 20, 501, 51));
        QFont font1;
        font1.setPointSize(16);
        label_matrix->setFont(font1);
        label_matrix->setStyleSheet(QString::fromUtf8("border-color: transparent;\n"
"color: rgb(255, 255, 255);"));
        line_width = new QLineEdit(centralwidget);
        line_width->setObjectName("line_width");
        line_width->setGeometry(QRect(20, 200, 201, 31));
        line_width->setFont(font);
        line_width->setStyleSheet(QString::fromUtf8("background-color: rgb(100, 100, 100);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);"));
        label_heigth = new QLabel(centralwidget);
        label_heigth->setObjectName("label_heigth");
        label_heigth->setGeometry(QRect(20, 240, 171, 41));
        QFont font2;
        font2.setPointSize(14);
        label_heigth->setFont(font2);
        label_heigth->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(255, 255, 255);"));
        label_width = new QLabel(centralwidget);
        label_width->setObjectName("label_width");
        label_width->setGeometry(QRect(20, 160, 171, 41));
        label_width->setFont(font2);
        label_width->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        label_width->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(255, 255, 255);"));
        ButtonTable = new QPushButton(centralwidget);
        ButtonTable->setObjectName("ButtonTable");
        ButtonTable->setGeometry(QRect(20, 340, 201, 41));
        ButtonTable->setFont(font2);
        ButtonTable->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(270, 70, 500, 500));
        widget->setStyleSheet(QString::fromUtf8("border-color: transparent;"));
        ButtonStrategy = new QPushButton(widget);
        ButtonStrategy->setObjectName("ButtonStrategy");
        ButtonStrategy->setGeometry(QRect(50, 440, 411, 51));
        ButtonStrategy->setFont(font2);
        ButtonStrategy->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(255, 255, 255);"));
        tableNLO = new QTableWidget(widget);
        tableNLO->setObjectName("tableNLO");
        tableNLO->setGeometry(QRect(0, 0, 501, 411));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setHintingPreference(QFont::PreferDefaultHinting);
        tableNLO->setFont(font3);
        tableNLO->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);\n"
"gridline-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);"));
        tableNLO->horizontalHeader()->setDefaultSectionSize(75);
        tableNLO->verticalHeader()->setDefaultSectionSize(75);
        NLO->setCentralWidget(centralwidget);

        retranslateUi(NLO);

        QMetaObject::connectSlotsByName(NLO);
    } // setupUi

    void retranslateUi(QMainWindow *NLO)
    {
        NLO->setWindowTitle(QCoreApplication::translate("NLO", "MainWindow", nullptr));
        line_heigth->setText(QCoreApplication::translate("NLO", "3", nullptr));
        label_matrix->setText(QCoreApplication::translate("NLO", "\320\222\320\260\321\210\320\260 \320\274\320\260\321\202\321\200\320\270\321\206\320\260 \320\264\320\273\321\217 \321\203\320\264\320\260\320\273\320\265\320\275\320\270\321\217 NLO \321\201\321\202\321\200\320\260\321\202\320\265\320\263\320\270\320\271", nullptr));
        line_width->setText(QCoreApplication::translate("NLO", "3", nullptr));
        label_heigth->setText(QCoreApplication::translate("NLO", "\320\222\321\213\321\201\320\276\321\202\320\260 \320\274\320\260\321\202\321\200\320\270\321\206\321\213", nullptr));
        label_width->setText(QCoreApplication::translate("NLO", "\320\250\320\270\321\200\320\270\320\275\320\260 \320\274\320\260\321\202\321\200\320\270\321\206\321\213", nullptr));
        ButtonTable->setText(QCoreApplication::translate("NLO", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
        ButtonStrategy->setText(QCoreApplication::translate("NLO", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 NLO \321\201\321\202\321\200\320\260\321\202\320\265\320\263\320\270\320\270", nullptr));
#if QT_CONFIG(tooltip)
        tableNLO->setToolTip(QCoreApplication::translate("NLO", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        tableNLO->setWhatsThis(QCoreApplication::translate("NLO", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

namespace Ui {
    class NLO: public Ui_NLO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NLO_H
