#include <iostream>
#include "Data.h"
#include <string>

using namespace std;

int main(){
    bool result = 0;

    Data d;
    int dia, mes, ano;

    cout << "Digite o dia, mes e ano:\n";

    cin >> dia >> mes >> ano;
    d.setDia(dia);
    d.setMes(mes);
    d.setAno(ano);

    result = d.verificaData();

    d.avancaDia();

    dia = d.getDia();
    mes = d.getMes();
    ano = d.getAno();

    //cout << dia << "/" << mes << "/" << ano;

    return 0;
}
