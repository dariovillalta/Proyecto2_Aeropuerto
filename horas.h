#ifndef HORAS_H
#define HORAS_H

#include <QDialog>
#include <vector>
#include "avion.h"
#include "vuelo.h"

namespace Ui {
class Horas;
}

class Horas : public QDialog
{
    Q_OBJECT

public:
    explicit Horas(QWidget *parent = 0, vector<Vuelo*>* miVuelos =0, vector<Avion*>* miAviones =0);
    ~Horas();

private slots:
    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Horas *ui;
    vector<Vuelo*>* miVuelos;
    vector<Avion*>* miAviones;
    void cargar();
};

#endif // HORAS_H
