#include "minmaxform.h"
#include "ui_minmaxform.h"

MinMaxForm::MinMaxForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MinMaxForm)
{
    ui->setupUi(this);
}

MinMaxForm::~MinMaxForm()
{
    delete ui;
}

void MinMaxForm::calculateMinMax()
{
    QVector<int> row(height, INT_MAX);
    QVector<int> col(weight, INT_MIN);

    for(int i=0; i<height; i++){
        for(int j=0; j<weight;j++){
            int val = ui->tableView->item(i,j)->text().toInt();

            if(val<row[i])
                row[i]=val;
            if (val>col[j])
                col[j]=val;
        }
    }
    podsvet(row,col);
}

void MinMaxForm::podsvet(const QVector<int>&row, const QVector<int>&col)
{

    for (int i=0;i<height; i++){
        for(int j=0; j<weight; j++){
            if(ui->tableView->item(i, j)->text().toInt()==row[i])
                ui->tableView->item(i, j)->setBackground(Qt::green);
        }
    }

    for (int i=0;i<height; i++){
        for(int j=0; j<weight; j++){
            if(ui->tableView->item(i, j)->text().toInt()==col[j])
                ui->tableView->item(i, j)->setBackground(Qt::red);
        }
    }
}

void MinMaxForm::on_ButtonTable_clicked()
{
    height = (ui->line_heigth->text()).toInt();
    weight = (ui->line_width->text()).toInt();
    if ((height > 1) && (height < 6) && (weight > 1) && (weight < 6)){
        ui->tableView->setRowCount(height);
        ui->tableView->setColumnCount(weight);
        for (int i=0;i<height;i++){
            for (int j=0;j<weight;j++){
                int val=QRandomGenerator::global()->bounded(-5,5);
                QTableWidgetItem *item= new QTableWidgetItem(QString::number(val));
                ui->tableView->setItem(i,j,item);
            }
        }
        ui->tableView->show();
    }
    else{
        QMessageBox::critical(nullptr, "Ошибка", "Введите размер матрицы от 2х2 до 5х5!");
    }
}



void MinMaxForm::on_ButtonStrategy_clicked()
{
    calculateMinMax();
}

