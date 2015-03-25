#include "modificarvuelo.h"
#include "ui_modificarvuelo.h"
#include <QMessageBox>
#include <iostream>

using namespace std;

ModificarVuelo::ModificarVuelo(QWidget *parent, vector<Vuelo>* miVuelos, vector<Avion>* miAviones) :
    QDialog(parent),
    ui(new Ui::ModificarVuelo)
{
    ui->setupUi(this);
    this->miVuelos = miVuelos;
    this->miAviones = miAviones;
    cargar();
}

ModificarVuelo::~ModificarVuelo()
{
    delete ui;
}

void ModificarVuelo::cargar(){
    ui->comboBox_2->clear();
    if(miVuelos->size() > 0){
        for(unsigned int i = 0; i < miVuelos->size(); i++){
            ui->comboBox_2->addItem( QString::number( ((Vuelo)miVuelos->at(i)).getNumeroVuelo() ) );
            ui->comboBox->addItem( QString::fromStdString( ((Avion)((Vuelo)miVuelos->at(i)).getAvion()).getModelo() ));
            ui->tf_destino->setText( QString::fromStdString( ((Vuelo)miVuelos->at(i)).getLugarDestino() ));
            ui->tf_hora->setText( QString::fromStdString( ((Vuelo)miVuelos->at(i)).getHora() ));
            ui->tf_numeroVuelo->setText( QString::number( ((Vuelo)miVuelos->at(i)).getNumeroVuelo() ) );
        }
    }else
        ui->comboBox->addItem("No hay Vuelos");
}



void ModificarVuelo::on_pushButton_clicked()
{
    try{
        string destino, hora, salida;
        int numVuelo, clases;
        destino = ui->tf_destino->text().toStdString();
        hora = ui->tf_hora->text().toStdString();
        salida = ui->tf_salida->text().toStdString();
        numVuelo = ui->tf_numeroVuelo->text().toInt();
        clases = ui->sp_clases->value();
        int sele = ui->comboBox_2->currentIndex();
        ((Vuelo)miVuelos->at(sele)).setHora(hora);
        ((Vuelo)miVuelos->at(sele)).setLugarLLegada(salida);
        ((Vuelo)miVuelos->at(sele)).setLugarDestino(destino);
        ((Vuelo)miVuelos->at(sele)).setNumeroVuelo(numVuelo);
        ((Vuelo)miVuelos->at(sele)).setNumClases(clases);
        QMessageBox::about(this, "title", "Agregado con Exito!");
    } catch(...){
        QMessageBox::critical(this, "title", "Error!");
    }
}
