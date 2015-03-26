#ifndef ELIMINARVUELO_H
#define ELIMINARVUELO_H

#include <QDialog>
#include "vuelo.h"
#include <vector>
#include "avion.h"

namespace Ui {
class EliminarVuelo;
}

class EliminarVuelo : public QDialog
{
    Q_OBJECT

public:
    explicit EliminarVuelo(QWidget *parent = 0, vector<Vuelo*>* miVuelos =0, vector<Avion*>* miAviones =0);
    ~EliminarVuelo();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_2_currentIndexChanged(int index);

private:
    Ui::EliminarVuelo *ui;
    vector<Vuelo*>* miVuelos;
    vector<Avion*>* miAviones;
    void cargar();
};

#endif // ELIMINARVUELO_H
