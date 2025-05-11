#ifndef OSNOVMENU_H
#define OSNOVMENU_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include "minmaxform.h"
#include "nlo.h"

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

    void on_NLO_clicked();

private:
    Ui::OsnovMenu *ui;
    MinMaxForm *minmaxform;
    NLO *nloform;
};
#endif // OSNOVMENU_H
