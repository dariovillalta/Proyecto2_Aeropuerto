#include "airbusa380.h"
#include "avion.h"
#include <sstream>
#include <string>

using std::string;
using std::stringstream;

AirbusA380::AirbusA380()
{

}

AirbusA380::~AirbusA380()
{

}

AirbusA380::AirbusA380(string marca, string modelo, int capacidadTripulacion, int capacidadPasajeros, float longitud, float altura, float pesoVacio, float pesoMaximo, int velocidadMaxima)
        :Avion(marca, modelo, capacidadTripulacion, capacidadPasajeros, longitud, altura, pesoVacio, pesoMaximo, velocidadMaxima){
    //this->marca = "Airbus";
    //this->modelo = "Airbus A380";
}

double AirbusA380::horas(double distancia, double velocidad, double presion){
    double horas;
    horas = ((distancia/velocidad)*presion);
    return horas;
}
