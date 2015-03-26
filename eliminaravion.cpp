#include "eliminaravion.h"
#include "ui_eliminaravion.h"
#include <QMessageBox>

EliminarAvion::EliminarAvion(QWidget *parent, vector<Vuelo*>* miVuelos, vector<Avion*>* miAviones) :
    QDialog(parent),
    ui(new Ui::EliminarAvion)
{
    ui->setupUi(this);
    this->miVuelos = miVuelos;
    this->miAviones = miAviones;
    cargar();
}

EliminarAvion::~EliminarAvion()
{
    delete ui;
}

void EliminarAvion::on_comboBox_currentIndexChanged(int index)
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

void EliminarAvion::cargar(){
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
void EliminarAvion::on_pushButton_clicked()
{
    try{
        if(miAviones->size() > 0){
            int eliminar = ui->comboBox->currentIndex();
            miAviones->erase (miAviones->begin()+eliminar);
            cargar();
        }else
            QMessageBox::about(this, "title", "No hay Aviones!");
    } catch(...){
        QMessageBox::critical(this, "title", "Error!");
    }
}
