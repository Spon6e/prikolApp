#include "nlo.h"
#include "ui_nlo.h"

NLO::NLO(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NLO)
{
    ui->setupUi(this);
}

NLO::~NLO()
{
    delete ui;
}

void NLO::vievlenie()
{
    QVector<int> row;
    QVector<int> col;
    int k=0;

    for(int i=0; i<height; i++){
        for(int j=0; j<weight; j++){
            QTableWidgetItem* item = ui->tableNLO->item(i,j);

            QString tx=item->text();
            QStringList NS=tx.split(",", Qt::SkipEmptyParts);
            k=0;
            for(const QString& num :NS){
                int number = num.trimmed().toInt();
                if(k==0){
                    row.append(number);
                }
                else{
                    col.append(number);
                }
                k+=1;
            }
        }
    }
    NLOstr(row, col);
}

void NLO::NLOstr(const QVector<int> &row, const QVector<int> &col)
{
    QVector<int> Nrow(height, 0);
    QVector<int> Ncol(weight, 0);
    int num1;
    int l1=INT_MIN;
    for (int i=0; i<weight; i++){
        l1=INT_MIN;
        for (int j=0; j<height; j++){
            if (row[j*weight + i] > l1){
                l1 = row[j*weight + i];
            }
        }
        for(int j=0; j<height; j++){
            if (row[j*weight+i]==l1){
                Nrow[j]=1;
            }
        }
    }

    qWarning() << " ЭТО ВТОРОЙ " ;
    for (int i=0; i<height; i++){
        l1=INT_MIN;
        for (int j=0; j<weight; j++){
            if (col[i * weight + j] > l1){
                l1 = col[i * weight + j];
            }
        }
        for(int j=0; j<weight; j++){
            if (col[i * weight + j]==l1){
                Ncol[j]=1;
            }
        }
    }
    podsvet(Nrow, Ncol);
}

void NLO::podsvet(const QVector<int> &row, const QVector<int> &col)
{
    QLinearGradient gradient(1,0,0,1);
    gradient.setColorAt(0, Qt::red);
    gradient.setColorAt(1, Qt::green);
    QBrush brush(gradient);


    for(int i=0; i<height; i++){
        for (int j=0; j<weight; j++){
            if(row[i]==0 && col[j]==0)
                ui->tableNLO->item(i,j)->setBackground(Qt::yellow);
            else if(row[i]==0)
                ui->tableNLO->item(i, j)->setBackground(Qt::red);
            else if(col[j]==0)
                ui->tableNLO->item(i,j)->setBackground(Qt::green);
            else
                ui->tableNLO->item(i, j)->setBackground(Qt::transparent);

        }
    }
}

void NLO::on_ButtonStrategy_clicked()
{
    vievlenie();
}


void NLO::on_ButtonTable_clicked()
{
    height = (ui->line_heigth->text()).toInt();
    qWarning() << height << "tut";
    weight = (ui->line_width->text()).toInt();
    if ((height > 1) && (height < 6) && (weight > 1) && (weight < 6)){
        ui->tableNLO->setRowCount(height);
        ui->tableNLO->setColumnCount(weight);
        for (int i=0;i<height;i++){
            for (int j=0;j<weight;j++){
                int val1=QRandomGenerator::global()->bounded(0,5);
                int val2=QRandomGenerator::global()->bounded(0,5);
                QString tx = QString("%1, %2").arg(val1).arg(val2);
                QTableWidgetItem *item= new QTableWidgetItem(tx);
                ui->tableNLO->setItem(i,j,item);
            }
        }
        ui->tableNLO->show();
    }
    else{
        QMessageBox::critical(nullptr, "Ошибка", "Введите размер матрицы от 2х2 до 5х5!");
    }
}
