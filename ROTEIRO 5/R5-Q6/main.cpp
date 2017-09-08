#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamentos.h"
#include <string>

using namespace std;

int main() {

    Pagamento p1;
    ControleDePagamentos c1;
    int i;
    bool result;
    double v;
    string n;

    for(i=0; i<2 ; i++){
        cout << "Informe o nome do funcinario:\n";
        cin >> n;
        c1.pagamentos[i].setNome(n);
        cout << "Agora, informe o pagamento do funcinario:\n";
        cin >> v;
        c1.pagamentos[i].setValor(v);
    }

    cout << "\nValor total dos pagamentos : " << c1.calculaTotalDePagamentos() << "\n\n";

    result = c1.existePagamentoParaFuncionario();

    if(result){
        cout << "Existe ao menos um funcionario com essa descricao\n";
    }else{
        cout << "Nao existe algum funcionario com essa descricao\n";
    }

    return 0;
}
