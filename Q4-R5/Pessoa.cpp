#include "Pessoa.h"
#include "CadastroDePessoa.h"
#include <string>

using namespace std;

Pessoa::Pessoa(string nome){
    nome;
}

Pessoa::Pessoa(){
    idade;
    telefone;
    nome;
}

void Pessoa::setIdade(int idade){
    this->idade = idade;
}

void Pessoa::setTelefone(string telefone){
    this->telefone = telefone;
}

void Pessoa::setNome(string nome){
    this->nome = nome;
}

int Pessoa::getIdade(){
    return this->idade;
}

string Pessoa::getTelefone(){
    return this->telefone;
}

string Pessoa::getNome(){
    return this->nome;
}
