#ifndef AVION_H
#define AVION_H
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

class Avion
{
protected:
    int capacidadTripulacion;
    int capacidadPasajeros;
    float longitud;
    float altura;
    float pesoVacio;
    float pesoMaximo;
    int velocidadMaxima;
    string marca;
    string modelo;
public:
    Avion();
    //5, 550, 70.66, 19.3, 162.400, 333.400, 945
    Avion(string, string, int, int, float, float, float, float, int);
    ~Avion();
    virtual string toString();
    virtual double horas(double distancia, double velocidad, double presion);

    int getcapacidadTripulacion()const;
    int getcapacidadPasajeros()const;
    float getlongitud()const;
    float getaltura()const;
    float getpesoVacio()const;
    float getpesoMaximo()const;
    int getvelocidadMaxima()const;
    string getModelo();
    string getMarca();

    void setcapacidadTripulacion(int const);
    void setcapacidadPasajeros(int const);
    void setlongitud(float const);
    void setaltura(float const);
    void setpesoVacio(float const);
    void setpesoMaximo(float const);
    void setvelocidadMaxima(int const);
};

#endif // AVION_H
