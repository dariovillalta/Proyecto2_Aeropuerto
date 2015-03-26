#include "modificaravion.h"
#include "ui_modificaravion.h"
#include <iostream>
#include <QMessageBox>

using namespace std;

ModificarAvion::ModificarAvion(QWidget *parent, vector<Vuelo*>* miVuelos, vector<Avion*>* miAviones) :
    QDialog(parent),
    ui(new Ui::ModificarAvion)
{
    ui->setupUi(this);
    this->miVuelos = miVuelos;
    this->miAviones = miAviones;
    cargar();
}

ModificarAvion::~ModificarAvion()
{
    delete ui;
}

void ModificarAvion::cargar(){
    ui->comboBox->clear();
    if(miAviones->size() > 0){
        for(unsigned int i = 0; i < miAviones->size(); i++){
            ui->comboBox->addItem( QString::fromStdString( miAviones->at(i)->getModelo()) );
            ui->sp_altura->setValue( miAviones->at(i)->getaltura() );
            ui->sp_longitud->setValue( miAviones->at(i)->getlongitud() );
            ui->sp_pasajeros->setValue( miAviones->at(i)->getcapacidadPasajeros() );
            ui->sp_pesoMaximo->setValue( miAviones->at(i)->getpesoMaximo() );
            ui->sp_pesoVacio->setValue( miAviones->at(i)->getpesoVacio() );
            ui->sp_tripulacion->setValue( miAviones->at(i)->getcapacidadTripulacion() );
            ui->sp_velocidadMaxima->setValue( miAviones->at(i)->getvelocidadMaxima() );
        }
    }else{
        ui->comboBox->addItem("No hay Aviones");
    }
}

void ModificarAvion::on_pushButton_clicked()
{
    try{
        float longitud, altura, maximo, vacio, velocidad;
        int tripulacion, pasajeros;
        longitud = ui->sp_longitud->value();
        altura = ui->sp_altura->value();
        maximo = ui->sp_pesoMaximo->value();
        vacio = ui->sp_pesoVacio->value();
        velocidad = ui->sp_velocidadMaxima->value();
        tripulacion = ui->sp_tripulacion->value();
        pasajeros = ui->sp_pasajeros->value();
        int sele = ui->comboBox->currentIndex();
        miAviones->at(sele)->setcapacidadTripulacion(tripulacion);
        miAviones->at(sele)->setcapacidadPasajeros(pasajeros);
        miAviones->at(sele)->setlongitud(longitud);
        miAviones->at(sele)->setaltura(altura);
        miAviones->at(sele)->setpesoVacio(vacio);
        miAviones->at(sele)->setpesoMaximo(maximo);
        miAviones->at(sele)->setvelocidadMaxima(velocidad);
        QMessageBox::about(this, "title", "Modificado con exito!");
    } catch(...){
        QMessageBox::critical(this, "title", "Error!");
    }
}

void ModificarAvion::on_comboBox_currentIndexChanged(int index)
{
    if(miAviones->size() > 0){
        int i = ui->comboBox->currentIndex();
        ui->sp_altura->setValue( miAviones->at(i)->getaltura() );
        ui->sp_longitud->setValue( miAviones->at(i)->getlongitud() );
        ui->sp_pasajeros->setValue( miAviones->at(i)->getcapacidadPasajeros() );
        ui->sp_pesoMaximo->setValue( miAviones->at(i)->getpesoMaximo() );
        ui->sp_pesoVacio->setValue( miAviones->at(i)->getpesoVacio() );
        ui->sp_tripulacion->setValue( miAviones->at(i)->getcapacidadTripulacion() );
        ui->sp_velocidadMaxima->setValue( miAviones->at(i)->getvelocidadMaxima() );
    }
}

