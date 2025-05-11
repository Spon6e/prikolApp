/********************************************************************************
** Form generated from reading UI file 'minmaxform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINMAXFORM_H
#define UI_MINMAXFORM_H

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

class Ui_MinMaxForm
{
public:
    QWidget *centralwidget;
    QLabel *label_matrix;
    QWidget *widget;
    QPushButton *ButtonStrategy;
    QTableWidget *tableView;
    QLineEdit *line_width;
    QLineEdit *line_heigth;
    QLabel *label_width;
    QLabel *label_heigth;
    QPushButton *ButtonTable;

    void setupUi(QMainWindow *MinMaxForm)
    {
        if (MinMaxForm->objectName().isEmpty())
            MinMaxForm->setObjectName("MinMaxForm");
        MinMaxForm->resize(800, 600);
        MinMaxForm->setMinimumSize(QSize(800, 600));
        MinMaxForm->setMaximumSize(QSize(800, 600));
        MinMaxForm->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:0, y2:1, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(125, 20, 60, 255), stop:1 rgba(0, 0, 0, 0));"));
        centralwidget = new QWidget(MinMaxForm);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        label_matrix = new QLabel(centralwidget);
        label_matrix->setObjectName("label_matrix");
        label_matrix->setGeometry(QRect(300, 50, 501, 51));
        QFont font;
        font.setPointSize(16);
        label_matrix->setFont(font);
        label_matrix->setStyleSheet(QString::fromUtf8("border-color: transparent;\n"
"color: rgb(255, 255, 255);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(300, 100, 500, 500));
        widget->setStyleSheet(QString::fromUtf8("border-color: transparent;"));
        ButtonStrategy = new QPushButton(widget);
        ButtonStrategy->setObjectName("ButtonStrategy");
        ButtonStrategy->setGeometry(QRect(50, 440, 411, 51));
        QFont font1;
        font1.setPointSize(14);
        ButtonStrategy->setFont(font1);
        ButtonStrategy->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(255, 255, 255);"));
        tableView = new QTableWidget(widget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 0, 501, 411));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setHintingPreference(QFont::PreferDefaultHinting);
        tableView->setFont(font2);
        tableView->horizontalHeader()->setDefaultSectionSize(75);
        tableView->verticalHeader()->setDefaultSectionSize(75);
        line_width = new QLineEdit(centralwidget);
        line_width->setObjectName("line_width");
        line_width->setGeometry(QRect(50, 210, 201, 31));
        QFont font3;
        font3.setPointSize(18);
        line_width->setFont(font3);
        line_width->setStyleSheet(QString::fromUtf8("border-color: transparent;\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(125, 20, 60, 255), stop:1 rgba(0, 0, 0, 0));\n"
"border-color: rgb(0, 0, 0);"));
        line_heigth = new QLineEdit(centralwidget);
        line_heigth->setObjectName("line_heigth");
        line_heigth->setGeometry(QRect(50, 310, 201, 31));
        line_heigth->setFont(font3);
        line_heigth->setStyleSheet(QString::fromUtf8("border-color: transparent;\n"
"color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(125, 20, 60, 255), stop:1 rgba(0, 0, 0, 0));\n"
"border-color: rgb(0, 0, 0);"));
        label_width = new QLabel(centralwidget);
        label_width->setObjectName("label_width");
        label_width->setGeometry(QRect(50, 160, 171, 41));
        label_width->setFont(font1);
        label_width->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(255, 255, 255);"));
        label_heigth = new QLabel(centralwidget);
        label_heigth->setObjectName("label_heigth");
        label_heigth->setGeometry(QRect(50, 260, 171, 41));
        label_heigth->setFont(font1);
        label_heigth->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(255, 255, 255);"));
        ButtonTable = new QPushButton(centralwidget);
        ButtonTable->setObjectName("ButtonTable");
        ButtonTable->setGeometry(QRect(50, 390, 201, 41));
        ButtonTable->setFont(font1);
        ButtonTable->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);"));
        MinMaxForm->setCentralWidget(centralwidget);

        retranslateUi(MinMaxForm);

        QMetaObject::connectSlotsByName(MinMaxForm);
    } // setupUi

    void retranslateUi(QMainWindow *MinMaxForm)
    {
        MinMaxForm->setWindowTitle(QCoreApplication::translate("MinMaxForm", "MainWindow", nullptr));
        label_matrix->setText(QCoreApplication::translate("MinMaxForm", "\320\222\320\260\321\210\320\260 \320\274\320\260\321\202\321\200\320\270\321\206\320\260 \320\277\320\276\320\270\321\201\320\272\320\260 \320\274\320\260\320\272\321\201\320\270\320\274\320\270\320\275\320\260", nullptr));
        ButtonStrategy->setText(QCoreApplication::translate("MinMaxForm", "\320\222\321\213\321\217\320\262\320\270\321\202\321\214 \321\201\321\202\321\200\320\260\321\202\320\265\320\263\320\270\321\216", nullptr));
        line_width->setText(QCoreApplication::translate("MinMaxForm", "3", nullptr));
        line_heigth->setText(QCoreApplication::translate("MinMaxForm", "3", nullptr));
        label_width->setText(QCoreApplication::translate("MinMaxForm", "\320\250\320\270\321\200\320\270\320\275\320\260 \320\274\320\260\321\202\321\200\320\270\321\206\321\213", nullptr));
        label_heigth->setText(QCoreApplication::translate("MinMaxForm", "\320\222\321\213\321\201\320\276\321\202\320\260 \320\274\320\260\321\202\321\200\320\270\321\206\321\213", nullptr));
        ButtonTable->setText(QCoreApplication::translate("MinMaxForm", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MinMaxForm: public Ui_MinMaxForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINMAXFORM_H
