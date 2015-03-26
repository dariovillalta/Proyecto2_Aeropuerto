#include "horas.h"
#include "ui_horas.h"
#include <QMessageBox>
#include "avion.h"
#include <iostream>
#include "airbusa380.h"
#include "boeing747.h"

using namespace std;

Horas::Horas(QWidget *parent, vector<Vuelo*>* miVuelos, vector<Avion*>* miAviones) :
    QDialog(parent),
    ui(new Ui::Horas)
{
    ui->setupUi(this);
    this->miVuelos = miVuelos;
    this->miAviones = miAviones;
    cargar();
}

Horas::~Horas()
{
    delete ui;
}

void Horas::cargar(){
    ui->comboBox->clear();
    if(this->miAviones->size() > 0){
        for(unsigned int i = 0; i < this->miAviones->size(); i++){
            ui->comboBox->addItem( QString::fromStdString( this->miAviones->at(i)->getModelo() ) );
        }
    }else{
        ui->comboBox->addItem("No hay Aviones");
    }
}

void Horas::on_comboBox_currentIndexChanged(int index)
{
    if(ui->comboBox->itemText( ui->comboBox->currentIndex() ) == "Airbus 380"){
        ui->lineEdit_3->setEnabled(false);
    }else
        ui->lineEdit_3->setEnabled(true);
}

void Horas::on_pushButton_clicked()
{
    if(miAviones->size()>0){
        double distancia, velocidad, presion;
        distancia = ui->lineEdit->text().toDouble();
        velocidad = ui->lineEdit_2->text().toDouble() ;
        presion = ui->lineEdit_3->text().toDouble();

        int num = ui->comboBox->currentIndex();
        double hora = miAviones->at(num)->horas(distancia, velocidad, presion);
        cout << hora << endl;
        hora = miAviones->at(num)->horas(distancia, velocidad, presion);
        QString str = QString("%1 horas").arg(hora, 0, 'g', 6);
        QMessageBox::information(this, "Tiempo", "Valor: "+ str+".\n");
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");

    }else
        QMessageBox::warning(this,"title", "No hay aviones.");
}

void Horas::on_pushButton_2_clicked()
{

}
