#include "aeropuerto.h"
#include "ui_aeropuerto.h"
#include "crearvuelo.h"
#include "vuelo.h"
#include <vector>
#include "avion.h"
#include <iostream>
#include "boeing747.h"
#include <crearavion.h>
#include <boleto.h>
#include <QMessageBox>
#include "horas.h"
#include "modificarvuelo.h"
#include "modificaravion.h"
#include "eliminaravion.h"
#include "eliminarvuelo.h"

using namespace std;

Aeropuerto::Aeropuerto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Aeropuerto)
{
    ui->setupUi(this);
    setWindowTitle("Aeropuerto Palmerola");
    miVuelos = new vector<Vuelo*>();
    miAviones = new vector<Avion*>();

    QStringList columnas;
    ui->tableWidget->setColumnCount(3);
    columnas << "Numero de Vuelo" << "Destino" << "Hora";
    ui->tableWidget->setHorizontalHeaderLabels(columnas);
    cargarTabla(/*miVuelos*/);
    loadCombo();
}

Aeropuerto::~Aeropuerto()
{
    delete ui;
}

void Aeropuerto::on_pushButton_clicked()
{
    ui->stackedWidget->addWidget(ui->page);
    loadCombo();
}

void Aeropuerto::on_pushButton_2_clicked()
{
    ui->stackedWidget->addWidget(ui->page_2);
    cargarTabla(/*miVuelos*/);
}

void Aeropuerto::on_pushButton_3_clicked()
{
    int numVueloCombo;
    string clase, numAsiento;
    try{
        numVueloCombo = ui->comboBox->currentIndex();
        Vuelo* vuelo = miVuelos->at(numVueloCombo);
        clase = ui->tf_clase->text().toStdString();
        numAsiento = ui->tf_numAsiento->text().toStdString();
        Boleto miBoleto(vuelo->getNumeroVuelo(), numAsiento, vuelo->getHora(), vuelo->getLugarLLegada(),
                vuelo->getLugarDestino(), clase);
        QMessageBox::about(this, "title", "Agregado con Exito!");

        ui->tf_numAsiento->setText("");
        ui->tf_clase->setText("");
    } catch(...){
        ui->tf_numAsiento->setText("");
        ui->tf_clase->setText("");
    }
}

void Aeropuerto::cargarTabla(/*miVuelos*/){
    QString destino, hora;
    int numVuelo, fila;
    while(ui->tableWidget->rowCount() > 0){
        ui->tableWidget->removeRow(0);
    }
    for(unsigned int i = 0; i < miVuelos->size(); i++){
        destino = QString::fromStdString( miVuelos->at(i)->getLugarDestino() );
        hora = QString::fromStdString( miVuelos->at(i)->getHora() );
        numVuelo  = miVuelos->at(i)->getNumeroVuelo();
        ui->tableWidget->insertRow( i );
        fila = ui->tableWidget->rowCount() - 1;
        ui->tableWidget->setItem(fila, 0, new QTableWidgetItem( QString::number(numVuelo) ));
        ui->tableWidget->setItem(fila, 1, new QTableWidgetItem( destino ));
        ui->tableWidget->setItem(fila, 2, new QTableWidgetItem(hora));
        ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    }
}

void Aeropuerto::on_actionAgregar_Vuelo_triggered()
{
    CrearVuelo crearvuelo(this, miVuelos , miAviones);
    crearvuelo.setWindowTitle("Agregar Vuelo");
    crearvuelo.exec();
}

void Aeropuerto::on_actionAgregar_Avion_triggered()
{
    CrearAvion crearavion(this, miVuelos , miAviones);
    crearavion.setWindowTitle("Agregar Avion");
    crearavion.exec();
}

void Aeropuerto::on_comboBox_currentIndexChanged(int index)
{
    /*if(this->miVuelos->size() > 0){
        int i = ui->comboBox->currentIndex();
        ui->lb_avion->setText( QString::fromStdString( ((Avion)miVuelos->at(i)->getAvion()).getModelo() ));
        ui->lb_destino->setText( QString::fromStdString( miVuelos->at(i)->getLugarDestino() ));
        ui->lb_hora->setText( QString::fromStdString( miVuelos->at(i)->getHora() ));
        ui->lb_numVuelo->setText( QString::number( miVuelos->at(i)->getNumeroVuelo() ) );
        ui->lb_salida->setText( QString::fromStdString( miVuelos->at(i)->getLugarLLegada() ) );
    }*/
}

void Aeropuerto::loadCombo(){
    ui->comboBox->clear();
    if(this->miVuelos->size() > 0){
        cout << this->miVuelos->size() << endl;
        for(unsigned int i = 0; i < this->miVuelos->size(); i++){
            ui->comboBox->addItem( QString::number( this->miVuelos->at(i)->getNumeroVuelo() ) );
            ui->lb_avion->setText( QString::fromStdString( ((Avion)this->miVuelos->at(i)->getAvion()).getModelo() ));
            ui->lb_destino->setText( QString::fromStdString( this->miVuelos->at(i)->getLugarDestino() ));
            ui->lb_hora->setText( QString::fromStdString( this->miVuelos->at(i)->getHora() ));
            ui->lb_numVuelo->setText( QString::number( this->miVuelos->at(i)->getNumeroVuelo() ) );
        }
    }else
        ui->comboBox->addItem("No hay Vuelos");
}

void Aeropuerto::on_pushButton_4_clicked()
{
    if(this->miVuelos->size() > 0){
        int i = ui->comboBox->currentIndex();
        ui->lb_avion->setText( QString::fromStdString( ((Avion)miVuelos->at(i)->getAvion()).getModelo() ));
        ui->lb_destino->setText( QString::fromStdString( miVuelos->at(i)->getLugarDestino() ));
        ui->lb_hora->setText( QString::fromStdString( miVuelos->at(i)->getHora() ));
        ui->lb_numVuelo->setText( QString::number( miVuelos->at(i)->getNumeroVuelo() ) );
    }
}

void Aeropuerto::on_actionCalcular_Horas_triggered()
{
    Horas hora(this, miVuelos, miAviones);
    hora.setWindowTitle("Calcular Horas");
    hora.exec();
}

void Aeropuerto::on_actionModificar_Vuelo_triggered()
{
    ModificarVuelo modVuelo(this,  miVuelos , miAviones);
    modVuelo.setWindowTitle("Modificar Vuelo");
    modVuelo.exec();
}

void Aeropuerto::on_actionEliminar_Vuelo_triggered()
{
    EliminarVuelo eliminarvuelo(this,  miVuelos , miAviones);
    eliminarvuelo.setWindowTitle("Eliminar Vuelo");
    eliminarvuelo.exec();
}

void Aeropuerto::on_actionModificar_Avion_triggered()
{
    ModificarAvion modAvion(this,  miVuelos , miAviones);
    modAvion.setWindowTitle("Modificar Avion");
    modAvion.exec();
}

void Aeropuerto::on_actionEliminar_Avion_triggered()
{
    EliminarAvion eliminaravion(this,  miVuelos , miAviones);
    eliminaravion.setWindowTitle("Eliminar Avion");
    eliminaravion.exec();
}
