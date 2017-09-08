#include "ControleDeGastos.h"
#include <string>
#include "Despesa.h"
#include <iostream>

using namespace std;

ControleDeGastos::ControleDeGastos(){
    int i;
    for(i=0; i<2; i++){
        d1[i];
    }// d2;}
}

void ControleDeGastos::setDespesas(Despesa d[], int i){
    for(i=0; i<2; i++){
        d1[i] = d[i];
    }
}

double ControleDeGastos::calculaTotalDeDespesas(){
    int i;
    double total = 0;

    for(i = 0; i < 2; i++){
        total += d1[i].getValor();
    }
    return total;
}

bool ControleDeGastos::existeDespesaDoTipo(){

string tipodedespesa;
int i;
    cout << "\n Digite o tipo de despesa que deseja procurar\n" << endl;
    cin >> tipodedespesa;

    for(i = 0; i < 2 ; i++){

    if (tipodedespesa == d1[i].getTdg()){
            return true;
        }else{
            return false;
        }
    }
}
