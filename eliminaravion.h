#ifndef ELIMINARAVION_H
#define ELIMINARAVION_H

#include <QDialog>
#include "vuelo.h"
#include <vector>
#include "avion.h"

namespace Ui {
class EliminarAvion;
}

class EliminarAvion : public QDialog
{
    Q_OBJECT

public:
    explicit EliminarAvion(QWidget *parent = 0, vector<Vuelo*>* miVuelos =0, vector<Avion*>* miAviones =0);
    ~EliminarAvion();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_clicked();

private:
    Ui::EliminarAvion *ui;
    vector<Vuelo*>* miVuelos;
    vector<Avion*>* miAviones;
    void cargar();
};

#endif // ELIMINARAVION_H
