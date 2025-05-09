#include "osnovmenu.h"
#include "ui_osnovmenu.h"

OsnovMenu::OsnovMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OsnovMenu)
{
    ui->setupUi(this);
}

OsnovMenu::~OsnovMenu()
{
    delete ui;
}
