#include "Pagamento.h"
#include "ControleDePagamentos.h"
#include <string>

using namespace std;

Pagamento::Pagamento(){
    valorPagamento;
    nomeDoFuncionario;
}

double Pagamento::getValor(){
    return valorPagamento;
}

string Pagamento::getNome(){
    return nomeDoFuncionario;
}

void Pagamento::setValor(double v){
    valorPagamento = v;
}

void Pagamento::setNome(string n){
    nomeDoFuncionario = n;
}
