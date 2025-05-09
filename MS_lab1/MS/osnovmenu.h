#ifndef OSNOVMENU_H
#define OSNOVMENU_H

#include <QMainWindow>

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

private:
    Ui::OsnovMenu *ui;
};
#endif // OSNOVMENU_H
