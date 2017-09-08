#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"
#include<string>

using namespace std;

int main(){

    bool r;
    Despesa d;
    ControleDeGastos c1, c2;
    double dp;
    string tg;
    int i;

    for(i = 0; i < 2; i++){
        cout << "Digite o tipo de despesa e o valor:\n";
        cin >> tg >> dp;

        c1.d1[i].setTdg(tg);
        c1.d1[i].setValor(dp);
    }

    for(i = 0; i < 2; i++){
        cout << "Despesa : " << c1.d1[i].getTdg() << " cadastrada\n";
        //cout << c1.d1[i].getValor() << endl;
    }
    cout << "Valor total das despesas : " << c1.calculaTotalDeDespesas();

    r = c1.existeDespesaDoTipo();

    if(r){
        cout << "\nExiste ao menos uma depesa com essa descricao\n";
    }else{
        cout << "\nNao existe despesa com essa descricao\n";
    }

    return 0;
}
/**c1.d1.setTdg("Gasolina");
    c1.d2.setTdg("Pc da NASA");

    c1.d1.setValor(150);
    c1.d2.setValor(40000);

    cout << "Tipo de gasto: " << c1.d1.getTdg() << ", despesa de " << c1.d1.getValor() << "\n";
    cout << "Tipo de gasto: " << c1.d2.getTdg() << ", despesa de " << c1.d2.getValor() << "\n";
    */
//    cout << "\nDespesas totais : " << c1.calculaTotalDeDespesas();

   // r = c1.existeDespesaDoTipo();

    /**if(r){
        cout << "\nExiste Gasto" << endl;
    }else{
        cout << "\nNao existe gastos" << endl;
    }*/
