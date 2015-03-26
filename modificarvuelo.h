#ifndef MODIFICARVUELO_H
#define MODIFICARVUELO_H

#include <QDialog>
#include "vuelo.h"
#include <vector>
#include "avion.h"

namespace Ui {
class ModificarVuelo;
}

class ModificarVuelo : public QDialog
{
    Q_OBJECT

public:
    explicit ModificarVuelo(QWidget *parent = 0, vector<Vuelo*>* miVuelos =0, vector<Avion*>* miAviones =0);
    ~ModificarVuelo();

private slots:
    void on_pushButton_clicked();

    void on_comboBox_2_currentIndexChanged(int index);

private:
    Ui::ModificarVuelo *ui;
    vector<Vuelo*>* miVuelos;
    vector<Avion*>* miAviones;
    void cargar();
};

#endif // MODIFICARVUELO_H
