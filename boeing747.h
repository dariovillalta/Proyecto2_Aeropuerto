#ifndef BOEING747_H
#define BOEING747_H
#include "avion.h"
#include <sstream>
#include <string>

using std::string;
using std::stringstream;

class Boeing747: public Avion
{
public:
    //5, 550, 70.66, 19.3, 162.400, 333.400, 945
    Boeing747(string, string, int = 5, int =  550, float = 70.66, float = 19.3, float = 162.400, float = 333.400, int = 945);
    ~Boeing747();
    //Boeing747(int, int, float, float, float, float, int);
    virtual double horas(double distancia, double velocidad, double presion);
};

#endif // BOEING747_H
