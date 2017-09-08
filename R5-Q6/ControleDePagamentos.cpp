#include "ControleDePagamentos.h"
#include "Pagamento.h"
#include <string>
#include <iostream>

using namespace std;

ControleDePagamentos::ControleDePagamentos(){
    int i;
    for(i = 0; i < 2; i++){
        pagamentos[i];
    }
}

void ControleDePagamentos::setPagamentos(Pagamento p[], int i){
    for(i = 0; i < 2; i++){
        pagamentos[i] = p[i];
    }
}

double ControleDePagamentos::calculaTotalDePagamentos(){
    double total = 0;
    int i;

    for(i = 0; i < 2; i++){
        total += pagamentos[i].getValor();
    }

    return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(){

    string ndf;
    int i;

    cout << "\n Digite o nome do funcionario que deseja procurar\n" << endl;
    cin >> ndf;

    for(i = 0; i < 2 ; i++){

        if (ndf == pagamentos[i].getNome()){
            return true;
        }else{
            return false;
        }
    }
}
