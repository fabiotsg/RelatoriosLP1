#include "Empregado.h"
#include <string.h>

using namespace std;

Empregado::Empregado(){
    nome;
    sbn;
    salario;
}

void Empregado::setNome(string nome){
    this->nome = nome;
}

void Empregado::setSbn(string sbn){
    this->sbn = sbn;
}

void Empregado::setSalario(float salario){
    this->salario = salario;
}

string Empregado::getNome(){
    return this->nome;
}

string Empregado::getSbn(){
    return this->sbn;
}

float Empregado::getSalario(){
    return this->salario;
}
