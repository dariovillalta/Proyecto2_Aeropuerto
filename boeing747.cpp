#include "boeing747.h"
#include "avion.h"
#include <sstream>
#include <string>
#include <iostream>

using std::string;
using std::stringstream;
using namespace std;

/*Boeing747::Boeing747()
{

}*/

Boeing747::~Boeing747()
{

}

Boeing747::Boeing747(string marca, string modelo, int capacidadTripulacion, int capacidadPasajeros, float longitud, float altura, float pesoVacio, float pesoMaximo, int velocidadMaxima)
        :Avion(marca, modelo, capacidadTripulacion, capacidadPasajeros, longitud, altura, pesoVacio, pesoMaximo, velocidadMaxima){
}

double Boeing747::horas(double distancia, double velocidad, double presion){
    double horas;
    horas = ((distancia/velocidad)*presion)/15;
    return horas;
}
