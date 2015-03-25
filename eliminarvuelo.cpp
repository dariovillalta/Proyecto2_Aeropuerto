#include "eliminarvuelo.h"
#include "ui_eliminarvuelo.h"

EliminarVuelo::EliminarVuelo(QWidget *parent, vector<Vuelo>* miVuelos, vector<Avion>* miAviones) :
    QDialog(parent),
    ui(new Ui::EliminarVuelo)
{
    ui->setupUi(this);
    this->miVuelos = miVuelos;
    this->miAviones = miAviones;
}

EliminarVuelo::~EliminarVuelo()
{
    delete ui;
}
