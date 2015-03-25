#ifndef AEROPUERTO_H
#define AEROPUERTO_H

#include <QMainWindow>
#include "vuelo.h"
#include <vector>
#include "avion.h"

using namespace std;

namespace Ui {
class Aeropuerto;
}

class Aeropuerto : public QMainWindow
{
    Q_OBJECT

public:
    explicit Aeropuerto(QWidget *parent = 0);
    ~Aeropuerto();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_actionAgregar_Vuelo_triggered();

    void on_actionAgregar_Avion_triggered();

    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_4_clicked();

    void on_actionCalcular_Horas_triggered();

    void on_actionModificar_Vuelo_triggered();

private:
    Ui::Aeropuerto *ui;
    vector<Vuelo>* miVuelos;
    vector<Avion>* miAviones;
    void cargarTabla(vector<Vuelo>*);
    void loadCombo();
};

#endif // AEROPUERTO_H
