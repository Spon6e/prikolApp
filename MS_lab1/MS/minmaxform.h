#ifndef MINMAXFORM_H
#define MINMAXFORM_H

#include <QMainWindow>
#include <QMessageBox>
#include <QRandomGenerator>

namespace Ui {
class MinMaxForm;
}

class MinMaxForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit MinMaxForm(QWidget *parent = nullptr);
    ~MinMaxForm();

    void calculateMinMax();
    void podsvet(const QVector<int>&row, const QVector<int>&col);

private slots:
    void on_ButtonTable_clicked();

    void on_ButtonStrategy_clicked();

private:
    Ui::MinMaxForm *ui;
    int height;
    int weight;
};

#endif // MINMAXFORM_H
