#ifndef CREARAVION_H
#define CREARAVION_H

#include <QDialog>
#include "vuelo.h"
#include <vector>
#include "avion.h"

using namespace std;

namespace Ui {
class CrearAvion;
}

class CrearAvion : public QDialog
{
    Q_OBJECT

public:
    explicit CrearAvion(QWidget *parent = 0, vector<Vuelo*>* miVuelos =0, vector<Avion*>* miAviones =0);
    ~CrearAvion();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CrearAvion *ui;
    vector<Vuelo*>* miVuelos;
    vector<Avion*>* miAviones;
    void cargarCombo();
    //void guardarAviones(Avion miAvion);
};

#endif // CREARAVION_H
