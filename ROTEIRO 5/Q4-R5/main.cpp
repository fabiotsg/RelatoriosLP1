#include <iostream>
#include "Pessoa.h"
#include "CadastroDePessoa.h"
#include <string>

using namespace std;

int main(){

    Pessoa p;
    //Pessoa p1[2];
    CadastroDePessoa cad;
    int idade;
    string nome, telefone;

    cout << "Informe seu nome :\n";
    cin >> nome;

    cout << "Informe seu telefone :\n";
    cin >> telefone;

    cout << "Informe sua idade :\n";
    cin >> idade;

    cad.altera.setNome(nome);
    cad.altera.setTelefone(telefone);
    cad.altera.setIdade(idade);

    nome = cad.altera.getNome();
    telefone = cad.altera.getTelefone();
    idade = cad.altera.getIdade();

    cout << "\nNome: " << nome << "\nTelefone: " << telefone << "\nIdade: " << idade << endl;



    return 0;
}
