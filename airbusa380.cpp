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
}

double AirbusA380::horas(double distancia, double velocidad, double presion){
    double horas;
    horas = ((distancia/velocidad)*presion)/10;
    return horas;
}

