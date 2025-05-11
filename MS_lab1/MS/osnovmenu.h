#ifndef OSNOVMENU_H
#define OSNOVMENU_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include "minmaxform.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class OsnovMenu;
}
QT_END_NAMESPACE

class OsnovMenu : public QMainWindow
{
    Q_OBJECT

public:
    OsnovMenu(QWidget *parent = nullptr);
    ~OsnovMenu();


private slots:
    void on_MaxMin_clicked();

private:
    Ui::OsnovMenu *ui;
    MinMaxForm *minmaxform;
};
#endif // OSNOVMENU_H
