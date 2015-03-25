#include "boleto.h"

Boleto::Boleto()
{

}

Boleto::~Boleto()
{

}

Boleto::Boleto(int vuelo, string numeroAsiento, string hora, string lugarLLegada, string lugarDestino, string clase){
    this->vuelo = vuelo;
    this->numeroAsiento = numeroAsiento;
    this->hora = hora;
    this->lugarLLegada = lugarLLegada;
    this->lugarDestino = lugarDestino;
    this->clase = clase;
}

string Boleto::getNumeroAsiento()const{
    return numeroAsiento;
}
string Boleto::getHora()const{
    return hora;
}
string Boleto::getLugarLLegada()const{
    return lugarLLegada;
}
string Boleto::getLugarDestino()const{
    return lugarDestino;
}
string Boleto::getClase()const{
    return clase;
}

void Boleto::setNumeroAsiento(const string numeroAsiento){
    this->numeroAsiento = numeroAsiento;
}

void Boleto::setHora(const string hora){
    this->hora = hora;
}

void Boleto::setLugarLLegada(const string lugarLLegada){
    this->lugarLLegada = lugarLLegada;
}

void Boleto::setLugarDestino(const string lugaarDestino){
    this->lugarDestino = lugarDestino;
}

void Boleto::setClase(const string clase){
    this->clase = clase;
}


