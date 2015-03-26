#include "modificarvuelo.h"
#include "ui_modificarvuelo.h"
#include <QMessageBox>
#include <iostream>

using namespace std;

ModificarVuelo::ModificarVuelo(QWidget *parent, vector<Vuelo*>* miVuelos, vector<Avion*>* miAviones) :
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
            ui->comboBox_2->addItem( QString::number( miVuelos->at(i)->getNumeroVuelo() ) );
            ui->tf_avion->setText( QString::fromStdString( ((Avion)miVuelos->at(i)->getAvion()).getModelo() ));
            ui->tf_destino->setText( QString::fromStdString( miVuelos->at(i)->getLugarDestino() ));
            ui->tf_hora->setText( QString::fromStdString(  miVuelos->at(i)->getHora() ));
            ui->tf_numeroVuelo->setText( QString::number( miVuelos->at(i)->getNumeroVuelo() ) );
        }
    }else{
        ui->comboBox_2->addItem("No hay Vuelos");
    }
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
        miVuelos->at(sele)->setHora(hora);
        miVuelos->at(sele)->setLugarLLegada(salida);
        miVuelos->at(sele)->setLugarDestino(destino);
        miVuelos->at(sele)->setNumeroVuelo(numVuelo);
        miVuelos->at(sele)->setNumClases(clases);
        QMessageBox::about(this, "title", "Modificado con Exito!");
        cargar();
    } catch(...){
        QMessageBox::critical(this, "title", "Error!");
    }
}

void ModificarVuelo::on_comboBox_2_currentIndexChanged(int index)
{
    if(this->miVuelos->size() > 0){
        int i = ui->comboBox_2->currentIndex();
        ui->tf_avion->setText( QString::fromStdString( ((Avion)miVuelos->at(i)->getAvion()).getModelo() ));
        ui->tf_destino->setText( QString::fromStdString( miVuelos->at(i)->getLugarDestino() ));
        ui->tf_hora->setText( QString::fromStdString( miVuelos->at(i)->getHora() ));
        ui->tf_numeroVuelo->setText( QString::number( miVuelos->at(i)->getNumeroVuelo() ) );
        ui->tf_salida->setText( QString::fromStdString( miVuelos->at(i)->getLugarLLegada() ) );
    }
}
