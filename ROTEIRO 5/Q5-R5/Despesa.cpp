#include "Despesa.h"
#include "ControleDeGastos.h"
#include<string>

using namespace std;

Despesa::Despesa(){
    valor;
    tipoDeGasto;
}

double Despesa::getValor(){
    return valor;
}
string Despesa::getTdg(){
    return tipoDeGasto;
}

void Despesa::setValor(double v){
    valor = v;
}
void Despesa::setTdg(string tdg){
    tipoDeGasto = tdg;
}
