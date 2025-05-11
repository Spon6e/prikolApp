#include "osnovmenu.h"
#include "ui_osnovmenu.h"
#include <QLabel>
#include <QPixmap>

OsnovMenu::OsnovMenu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OsnovMenu),
    minmaxform(nullptr)
{
    ui->setupUi(this);
    QPixmap pixmap("C:/OOT/image.png");
    if (pixmap.isNull()) {
        qDebug() << "Ошибка: Изображение не загружено!";
    } else {
        qDebug() << "Изображение успешно загружено!";
        QLabel *IM = ui->IM;
        IM->setPixmap(pixmap.scaled(IM->size(), Qt::KeepAspectRatio));
        IM->show();
    }
}

OsnovMenu::~OsnovMenu()
{
    delete ui;
}


void OsnovMenu::on_MaxMin_clicked()
{
    if (!minmaxform){
        minmaxform=new MinMaxForm(this);
    }
    minmaxform->show();
}

