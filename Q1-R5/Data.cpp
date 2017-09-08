#include "Data.h"
#include <iostream>

using namespace std;

Data::Data(){
}

int Data::getDia(){
    return this->dia;
}
int Data::getMes(){
    return this->mes;
}
int Data::getAno(){
    return this->ano;
}
void Data::setDia(int dia){
    //cout << dia << "\n\n";
    this->dia = dia;

}
void Data::setMes(int mes){
    this->mes = mes;
}
void Data::setAno(int ano){
    this->ano = ano;
}

bool Data::verificaData(){

    if(((ano%4) != 0) && ((ano%400)!= 0) && (mes == 2) && (dia > 28)){
        cout << "Invalido\n";
    }

    if(((ano%4)==0) && ((ano%100)!= 0) && dia > 29 && mes == 2 ){
        cout << "Data invalida!" << endl;

    }
    if((dia > 31) && (mes == 1|| mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)){
        cout << "Data Invalida" << endl;
    }

    if((dia > 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)){
        cout << "Data invalida!" << endl;
    }
}

void Data::avancaDia(){
    //cout << dia << "\n\n";
    if((dia == 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)){
        dia = 1;
        mes +=1;
    }else if((dia == 31) && (mes == 1|| mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10)){
        dia = 1;
        mes += 1;
    }else if(((ano%4) != 0) && ((ano%400)!= 0) && (mes == 2) && (dia == 28)){
        dia = 1;
        mes = 3;
    }else if(((ano%4) == 0) && ((ano%100)!= 0) && (dia == 29) && (mes == 2)){
        dia = 1;
        mes = 3;
    }else if(dia == 31 && mes == 12){
        dia = 1;
        mes = 1;
        ano+=1;
    }else{
        dia+=1;
    }
    cout << dia << "/" << mes << "/" << ano;

}
