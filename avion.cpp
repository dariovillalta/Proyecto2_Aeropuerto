#include "avion.h"
#include <sstream>
#include <string>
#include <iostream>

using std::string;
using std::stringstream;
using std::cout;
using std::endl;

Avion::Avion()
{

}

Avion::~Avion()
{

}
Avion::Avion(string marca, string modelo, int capacidadTripulacion, int capacidadPasajeros, float longitud, float altura, float pesoVacio, float pesoMaximo, int velocidadMaxima){
    this->marca = marca;
    this->modelo = modelo;
    this->capacidadTripulacion = capacidadTripulacion;
    this->capacidadPasajeros = capacidadPasajeros;
    this->longitud = longitud;
    this->altura = altura;
    this->pesoVacio = pesoVacio;
    this->pesoMaximo = pesoMaximo;
    this->velocidadMaxima = velocidadMaxima;
}
string Avion::toString(){
    stringstream ss;
    ss << "Avion [Capacidad Tripulacion: " << capacidadTripulacion << ", Capacidad Pasajeros: " << capacidadPasajeros
       << ", Velocidad Maxima: " << velocidadMaxima << "]";
    return ss.str();
}

string Avion::getModelo(){
    return modelo;
}

string Avion::getMarca(){
    return marca;
}

int Avion::getcapacidadTripulacion()const{
    return capacidadTripulacion;
}
int Avion::getcapacidadPasajeros()const{
    return capacidadPasajeros;
}
float Avion::getlongitud()const{
    return longitud;
}
float Avion::getaltura()const{
    return altura;
}
float Avion::getpesoVacio()const{
    return pesoVacio;
}
float Avion::getpesoMaximo()const{
    return pesoMaximo;
}
int Avion::getvelocidadMaxima()const{
    return velocidadMaxima;
}

void Avion::setcapacidadTripulacion(int capacidadTripulacion){
    this->capacidadTripulacion = capacidadTripulacion;
}

void Avion::setcapacidadPasajeros(int capacidadPasajeros){
    this->capacidadPasajeros = capacidadPasajeros;
}

void Avion::setlongitud(float longitud){
    this->longitud = longitud;
}

void Avion::setaltura(float altura){
    this->altura = altura;
}

void Avion::setpesoVacio(float pesoVacio){
    this->pesoVacio = pesoVacio;
}

void Avion::setpesoMaximo(float pesoMaximo){
    this->pesoMaximo = pesoMaximo;
}

void Avion::setvelocidadMaxima(int velocidadMaxima){
    this->velocidadMaxima = velocidadMaxima;
}

double Avion::horas(double distancia, double velocidad, double presion){
    return 0;
}
