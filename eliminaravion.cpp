#include "eliminaravion.h"
#include "ui_eliminaravion.h"

EliminarAvion::EliminarAvion(QWidget *parent, vector<Vuelo>* miVuelos, vector<Avion>* miAviones) :
    QDialog(parent),
    ui(new Ui::EliminarAvion)
{
    ui->setupUi(this);
    this->miVuelos = miVuelos;
    this->miAviones = miAviones;
}

EliminarAvion::~EliminarAvion()
{
    delete ui;
}
