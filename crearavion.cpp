#include "crearavion.h"
#include "ui_crearavion.h"
#include "vuelo.h"
#include <vector>
#include "avion.h"
#include "boeing747.h"
#include "airbusa380.h"

#include <fstream>
#include <QtCore>
#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include <iostream>

using namespace std;

CrearAvion::CrearAvion(QWidget *parent, vector<Vuelo*>* miVuelos, vector<Avion*>* miAviones) :
    QDialog(parent),
    ui(new Ui::CrearAvion)
{
    ui->setupUi(this);
    this->miVuelos =  miVuelos;
    this->miAviones = miAviones;
    cargarCombo();
}

CrearAvion::~CrearAvion()
{
    delete ui;
}

void CrearAvion::on_pushButton_clicked()
{
    int capacidadTripulacion, capacidadPasajeros, velocidadMaxima;
    float longitud, altura, pesoVacio, pesoMaximo;
    try{
        capacidadTripulacion = ui->sp_tripulacion->value();
        capacidadPasajeros = ui->sp_pasajeros->value();
        longitud = ui->sp_longitud->value();
        altura = ui->sp_altura->value();
        pesoVacio = ui->sp_pesoVacio->value();
        pesoMaximo = ui->sp_pesoMaximo->value();
        velocidadMaxima = ui->sp_velocidadMaxima->value();

        if(ui->comboBox->itemText( ui->comboBox->currentIndex() ) == "Boeing 747"){
            miAviones->push_back( new Boeing747 ("Boeing Commercial Airplanes", "Boeing 747", capacidadTripulacion,
                                                   capacidadPasajeros, longitud, altura, pesoVacio, pesoMaximo, velocidadMaxima) );
            QMessageBox::about(this, "title", "Agregado con Exito!");
        } else if(ui->comboBox->itemText( ui->comboBox->currentIndex() ) == "Airbus 380"){
            miAviones->push_back( new AirbusA380 ("Airbus", "Airbus A380", capacidadTripulacion, capacidadPasajeros, longitud,
                                               altura, pesoVacio, pesoMaximo, velocidadMaxima) );
            QMessageBox::about(this, "title", "Agregado con Exito!");
        }

        ui->sp_tripulacion->setValue(0);
        ui->sp_pasajeros->setValue(0);
        ui->sp_longitud->setValue(0);
        ui->sp_altura->setValue(0);
        ui->sp_pesoVacio->setValue(0);
        ui->sp_pesoMaximo->setValue(0);
        ui->sp_velocidadMaxima->setValue(0);
    }catch(...){
        ui->sp_tripulacion->setValue(0);
        ui->sp_pasajeros->setValue(0);
        ui->sp_longitud->setValue(0);
        ui->sp_altura->setValue(0);
        ui->sp_pesoVacio->setValue(0);
        ui->sp_pesoMaximo->setValue(0);
        ui->sp_velocidadMaxima->setValue(0);
        QMessageBox::critical(this, "title", "Error!");
    }
}

void CrearAvion::cargarCombo(){
    ui->comboBox->addItem( QString::fromStdString("Boeing 747") );
    ui->comboBox->addItem( QString::fromStdString("Airbus 380") );
}

/*void CrearAvion::guardarAviones(int, int, float, float, float, float, int){
    QFile file ("./aviones.bin");

    //QMap<qint64, Avion> map;

    map.insert(1,miAvion);
    if(!file.open(QIODevice::WriteOnly)){
        qDebug() << "No se pudo cargar el archivo.";
        return;
    }

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_5_4);

    out << map;

    file.flush();
    file.close();;

    cout << "Entre 1" << endl;
    FILE* file = fopen("aviones.bin", "wb");
    fwrite(&miAvion, sizeof(miAvion), 1, file);
    fclose(file);
    cout << "Entre 2" << endl;
}*/
