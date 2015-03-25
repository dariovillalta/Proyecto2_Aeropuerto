#ifndef MODIFICARAVION_H
#define MODIFICARAVION_H

#include <QDialog>
#include "vuelo.h"
#include <vector>
#include "avion.h"

namespace Ui {
class ModificarAvion;
}

class ModificarAvion : public QDialog
{
    Q_OBJECT

public:
    explicit ModificarAvion(QWidget *parent = 0, vector<Vuelo>* miVuelos =0, vector<Avion>* miAviones =0);
    ~ModificarAvion();

private:
    Ui::ModificarAvion *ui;
    vector<Vuelo>* miVuelos;
    vector<Avion>* miAviones;
    void cargar();
};

#endif // MODIFICARAVION_H
