#ifndef VUELO_H
#define VUELO_H
#include "avion.h"
#include "boleto.h"
#include <vector>

using namespace std;

class Vuelo
{
    Avion avion;
    int numeroVuelo;
    string lugarLLegada;
    string lugarDestino;
    int numClases;
    string hora;
    //vector<Boleto> miBoletos;
public:
    ~Vuelo();
    Vuelo(Avion avion, int numeroVuelo, string lugarLLegada, string lugarDestino, int numClases, string hora /*vector<Boleto> miBoletos*/);
    Vuelo(const Vuelo&);
    Avion getAvion()const;
    int getNumeroVuelo()const;
    string getLugarLLegada()const;
    string getLugarDestino()const;
    int getNumClases()const;
    string getHora()const;
    //void agregarBoleto(Boleto miBoleto);

    void setAvion(Avion avion);
    void setNumeroVuelo(int numeroVuelo);
    void setLugarLLegada(string lugarLLegada);
    void setLugarDestino(string lugarDestino);
    void setNumClases(int numClases);
    void setHora(string hora);
};

#endif // VUELO_H
