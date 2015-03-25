#include "horas.h"
#include "ui_horas.h"
#include <QMessageBox>
#include "avion.h"
#include <iostream>
#include "airbusa380.h"
#include "boeing747.h"

using namespace std;

Horas::Horas(QWidget *parent, vector<Vuelo>* miVuelos, vector<Avion>* miAviones) :
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
    if(miAviones->size() > 0){
        for( int i = 0; i < miAviones->size(); i++){
            ui->comboBox->addItem( QString::number( ((Vuelo)miVuelos->at(i)).getNumeroVuelo() ) );
        }
    }else
        ui->comboBox->addItem("No hay Aviones");
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
        //int i = ui->comboBox->currentIndex();
        //double hora;
        for(int i = 0; i < miAviones->size(); i++){
            cout << ((Vuelo)miVuelos->at(i)).getNumeroVuelo();
        }
        cout << "Ingrese cual desea modificar: " << endl;
        cin >> this->num;
        double hora = ((Avion)miAviones->at(num)).horas(distancia, velocidad, presion);
        /*if(ui->comboBox->itemText( ui->comboBox->currentIndex() ) == "Airbus 380"){
            AirbusA380 a("Airbus", "Airbus A380", 22, 550, 20.1,
                         17.8, 10002, 100003, 901);
            hora = ((Avion)a).horas(distancia, velocidad, presion);
        }else{
            Boeing747 bo("Boeing Commercial Airplanes", "Boeing 747", 20, 550, 20.1,
                         19.2, 10000, 10000, 901);
            hora = ((Avion)bo).horas(distancia, velocidad, presion);
        }*/
        ui->doubleSpinBox->setValue(hora);
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");

    }else
        QMessageBox::warning(this,"title", "No hay aviones.");
}

void Horas::on_pushButton_2_clicked()
{

}
