#include "vuelo.h"
#include "avion.h"
#include <iostream>

using namespace std;

Vuelo::Vuelo(Avion avion, int numeroVuelo, string lugarLLegada, string lugarDestino, int numClases, string hora /*vector<Boleto> miBoletos*/)
{
    this->avion = avion;
    this->numeroVuelo = numeroVuelo;
    this->lugarLLegada = lugarLLegada;
    this->lugarDestino = lugarDestino;
    this->numClases = numClases;
    this->hora = hora;
    //this->miBoletos = miBoletos;
}

Vuelo::Vuelo(const Vuelo& otro):avion(otro.getAvion()), numeroVuelo(otro.getNumeroVuelo()), lugarLLegada(otro.getLugarLLegada()),
                                                             lugarDestino(otro.getLugarDestino()), numClases(otro.getNumClases()),
                                                             hora(otro.getHora())/*, miBoletos(otro.miBoletos)*/{
}

Vuelo::~Vuelo()
{

}

Avion Vuelo::getAvion()const{
    return avion;
}
int Vuelo::getNumeroVuelo()const{
    return numeroVuelo;
}
string Vuelo::getLugarLLegada()const{
    return lugarLLegada;
}
string Vuelo::getLugarDestino()const{
    return lugarDestino;
}
int Vuelo::getNumClases()const{
    return numClases;
}
string Vuelo::getHora()const{
    return hora;
}

void Vuelo::setAvion(Avion avion){
    this->avion = avion;
}

void Vuelo::setNumeroVuelo(int numeroVuelo){
    this->numeroVuelo = numeroVuelo;
}

void Vuelo::setLugarLLegada(string lugarLLegada){
    this->lugarLLegada = lugarLLegada;
}

void Vuelo::setLugarDestino(string lugarDestino){
    this->lugarDestino = lugarDestino;
}

void Vuelo::setNumClases(int numClases){
    this->numClases = numClases;
}

void Vuelo::setHora(string hora){
    this->hora = hora;
    cout << this->hora;
}

/*void Vuelo::agregarBoleto(Boleto miBoleto){
    this->miBoletos.push_back(miBoleto);
}*/
