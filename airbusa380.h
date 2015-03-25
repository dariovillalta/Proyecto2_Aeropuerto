#ifndef AIRBUSA380_H
#define AIRBUSA380_H
#include "avion.h"
#include <sstream>
#include <string>

using std::string;
using std::stringstream;

class AirbusA380: public Avion
{
public:
    AirbusA380();
    ~AirbusA380();
    AirbusA380(string, string, int, int, float, float, float, float, int);
    virtual double horas(double distancia, double velocidad, double presion);
};

#endif // AIRBUSA380_H
