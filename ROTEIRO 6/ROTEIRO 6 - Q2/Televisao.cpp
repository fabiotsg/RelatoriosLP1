#include "Televisao.h"
#include <iostream>

using namespace std;

Televisao::Televisao(){

}

Televisao::~Televisao(){

}
int Televisao::getVolume(){
    return volume;
}
int Televisao::getCanal(){
    return canal;
}

void Televisao::setVolume(int v){
    volume = v;
}

void Televisao::setCanal(int c){
    canal = c;
}

void Televisao::AumentaVolume(int v){
    volume = v+1;
}

void Televisao::DiminuiVolume(int v){
    volume = v - 1;
}

void Televisao::AumentaCanal(int c){
    canal = c + 1;
}

void Televisao::DiminuiCanal(int c){
    canal = c - 1;
}
