#ifndef CREARVUELO_H
#define CREARVUELO_H

#include <QDialog>
#include "vuelo.h"
#include <vector>
#include "avion.h"

using namespace std;

namespace Ui {
class CrearVuelo;
}

class CrearVuelo : public QDialog
{
    Q_OBJECT

public:
    explicit CrearVuelo(QWidget *parent = 0, vector<Vuelo>* miVuelos =0, vector<Avion>* miAviones =0);
    ~CrearVuelo();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CrearVuelo *ui;
    vector<Vuelo>* miVuelos;
    vector<Avion>* miAviones;
    void loadAviones(vector<Avion>*);
};

#endif // CREARVUELO_H
