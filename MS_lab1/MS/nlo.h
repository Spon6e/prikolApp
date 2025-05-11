#ifndef NLO_H
#define NLO_H

#include <QMainWindow>
#include <QMessageBox>
#include <QRandomGenerator>

namespace Ui {
class NLO;
}

class NLO : public QMainWindow
{
    Q_OBJECT

public:
    explicit NLO(QWidget *parent = nullptr);
    ~NLO();

    void vievlenie();
    void NLOstr(const QVector<int> &row, const QVector<int> &col);
    void podsvet(const QVector<int> &row, const QVector<int> &col);

private slots:
    void on_ButtonStrategy_clicked();

    void on_ButtonTable_clicked();

private:
    Ui::NLO *ui;
    int height;
    int weight;
};

#endif // NLO_H
