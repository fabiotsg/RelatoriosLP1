#include "Relogio.h"
#include <iostream>

using namespace std;

Relogio::Relogio(){
    hora;
    minuto;
    segundos;
}
Relogio::~Relogio(){

}

void Relogio::setHorario(int h, int m, int s){
    hora = h;
    minuto = m;
    segundos = s;
}

int Relogio::getHora(){
    return hora;
}

int Relogio::getMinuto(){
    return minuto;
}

int Relogio::getSegundo(){
    return segundos;
}

void Relogio::avancarHorario(int h, int m, int s){
    if((h > 23) || (h < 0) || (m > 60) || (m < 0) || (s < 0) || (s > 60)){
        cout << "Horario INVALIDO !!!\n";
         hora = minuto = segundos = 0;

    }else if(s == 59 && (m < 59)){
        hora = h;
        minuto = m+1;
        segundos = 0;

    }else if(s == 59 && (m == 59) && (h < 22)){
        hora = h+1;
        minuto = 0;
    }
}
