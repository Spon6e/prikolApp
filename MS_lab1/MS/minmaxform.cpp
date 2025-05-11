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
    int minSTO=INT_MIN;
    int maxSTR=INT_MAX;
    int numSTR = 0;
    int numSTO = 0;
    QLinearGradient gradient(1,0,0,1);
    gradient.setColorAt(0, Qt::red);
    gradient.setColorAt(1, Qt::green);
    QBrush brush(gradient);

    for (int i=0; i<height; i++){
        if (row[i]>minSTO){
            numSTO=i;
            minSTO=row[i];
        }
    }
    for (int i=0; i<weight; i++){
        if (col[i]<maxSTR){
            numSTR=i;
            maxSTR=col[i];
        }
    }

    for (int i=0;i<height; i++){
        for(int j=0; j<weight; j++){
            if ((ui->tableView->item(i, j)->text().toInt()==row[i]) && (row[i]==minSTO))
                ui->tableView->item(i, j)->setBackground(Qt::red);
            if ((ui->tableView->item(i, j)->text().toInt()==col[j]) && (col[j]==maxSTR))
                ui->tableView->item(i, j)->setBackground(Qt::green);
            if ((ui->tableView->item(i, j)->text().toInt()==row[i]) && (ui->tableView->item(i, j)->text().toInt()==col[j]) && (col[j]==maxSTR) && (row[i]==minSTO))
                ui->tableView->item(i, j)->setBackground(brush);
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

