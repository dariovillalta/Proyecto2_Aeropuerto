#include "eliminarvuelo.h"
#include "ui_eliminarvuelo.h"
#include <QMessageBox>

EliminarVuelo::EliminarVuelo(QWidget *parent, vector<Vuelo*>* miVuelos, vector<Avion*>* miAviones) :
    QDialog(parent),
    ui(new Ui::EliminarVuelo)
{
    ui->setupUi(this);
    this->miVuelos = miVuelos;
    this->miAviones = miAviones;
    cargar();
}

EliminarVuelo::~EliminarVuelo()
{
    delete ui;
}

void EliminarVuelo::on_pushButton_clicked()
{
    try{
        if(miVuelos->size() > 0){
            int eliminar = ui->comboBox_2->currentIndex();
            miVuelos->erase (miVuelos->begin()+eliminar);
            cargar();
        }else
            QMessageBox::critical(this, "title", "No hay Vuelos!");
    } catch(...){
        QMessageBox::critical(this, "title", "Error!");
    }
}

void EliminarVuelo::cargar(){
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
        ui->tf_avion->setText( "" );
        ui->tf_destino->setText( "" );
        ui->tf_hora->setText( "" );
        ui->tf_numeroVuelo->setText( "" );
    }
}

void EliminarVuelo::on_comboBox_2_currentIndexChanged(int index)
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
