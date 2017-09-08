#include <iostream>
#include "Empregado.h"
#include "EmpregadoTest.h"
#include <string>

using namespace std;

int main(){

    Empregado e;
    EmpregadoTest e2, e3;
    string nome, sbn, nome1, sbn1;
    float salario, salario1;

    cout << "Informe o nome do empregado:\n";
    cin >> nome;

    cout << "Informe o sobrenome do empregado:\n";
    cin >> sbn;

    cout << "Informe o salario do empregado:\n";
    cin >> salario;

    e.setNome(nome);
    e.setSbn(sbn);
    e.setSalario(salario);

    e2.emp1.setSalario(salario1);
    e2.emp1.setNome(nome1);
    e2.emp1.setSbn(sbn1);


    /**for(i = 0; i < n; i++){
        cin >> e.nome >> e.sbn >> e.salario;
        cout <<"Empregado: " << e.nome << " " << e.sbn << "->Salario anual com aumento de 10%: " << (e.salario*1.01);
    }*/

    return 0;
}
