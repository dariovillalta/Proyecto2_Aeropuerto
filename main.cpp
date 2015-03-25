#include "aeropuerto.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Aeropuerto w;
    w.show();

    return a.exec();
}
