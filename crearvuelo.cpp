#include "crearvuelo.h"
#include "ui_crearvuelo.h"
#include "vuelo.h"
#include <vector>
#include "avion.h"
#include <exception>
#include <iostream>
#include <qmessagebox.h>

using namespace std;

CrearVuelo::CrearVuelo(QWidget *parent, vector<Vuelo>* miVuelos, vector<Avion>* miAviones) :
    QDialog(parent),
    ui(new Ui::CrearVuelo)
{
    ui->setupUi(this);
    this->miVuelos = miVuelos;
    this->miAviones = miAviones;
    loadAviones(miAviones);
}

CrearVuelo::~CrearVuelo()
{
    delete ui;
}

void CrearVuelo::on_pushButton_clicked()
{
    QString numeroVuelo, hora, destino, llegada;
    int clases, numAvion;
    Avion avion;
    try{
        if(miAviones->size() > 0){
            numAvion = ui->comboBox->currentIndex();
            avion = miAviones->at(numAvion);
            numeroVuelo = ui->tf_numeroVuelo->text();
            hora = ui->tf_hora->text();
            destino = ui->tf_destino->text();
            llegada = ui->tf_salida->text();
            clases = ui->sp_clases->value();
            //Avion avion, int numeroVuelo, string lugarLLegada, string lugarDestino, int numClases, string hora
            Vuelo miVuelo(avion, numeroVuelo.toInt(), llegada.toStdString(), destino.toStdString(), clases, hora.toStdString());
            miVuelos->push_back(miVuelo);
            QMessageBox::about(this, "title", "Agregado con exito.");
        } else
            QMessageBox::critical(this, "title", "No hay aviones Creados!");
    } catch(exception e){
        ui->tf_salida->setText("");
        ui->tf_hora->setText("");
        ui->tf_numeroVuelo->setText("");
        ui->tf_destino->setText("");
        QMessageBox::critical(this, "title", "Error!");
    }
}

void CrearVuelo::loadAviones(vector<Avion>* miAviones){
    ui->comboBox->clear();
    if(miAviones->size() > 0){
        for(int i = 0; i < miAviones->size(); i++){
            //ui->comboBox->addItem(miAviones->at(i).getModelo());
            //cout << miAviones->at(i).getModelo() << endl;
            ui->comboBox->addItem( QString::fromStdString( ((Avion)miAviones->at(i)).getModelo()) );
        }
    }else
        ui->comboBox->addItem("No hay Aviones");
}
