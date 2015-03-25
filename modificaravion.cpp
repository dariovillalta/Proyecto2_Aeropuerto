#include "modificaravion.h"
#include "ui_modificaravion.h"

ModificarAvion::ModificarAvion(QWidget *parent, vector<Vuelo>* miVuelos, vector<Avion>* miAviones) :
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

}
