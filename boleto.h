#ifndef BOLETO_H
#define BOLETO_H
#include "vuelo.h"


class Boleto
{
    int vuelo;
    string numeroAsiento;
    string hora;
    string lugarLLegada;
    string lugarDestino;
    string clase;
public:
    Boleto();
    ~Boleto();
    Boleto(int, string, string, string, string, string);

    int getAvion()const;
    string getNumeroAsiento()const;
    string getHora()const;
    string getLugarLLegada()const;
    string getLugarDestino()const;
    string getClase()const;

    void setAvion(const int avion);
    void setNumeroAsiento(const string numeroAsiento);
    void setHora(const string hora);
    void setLugarLLegada(const string lugarLLegada);
    void setLugarDestino(const string lugaarDestino);
    void setClase(const string clase);
};

#endif // BOLETO_H
