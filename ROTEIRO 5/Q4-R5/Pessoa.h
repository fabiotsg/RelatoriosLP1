#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include <string>

using namespace std;

class Pessoa{

    private:

        int idade;
        string nome, telefone;

    public:

        Pessoa(string nome);
        Pessoa();

        void setIdade(int idade);
        void setTelefone(string telefone);
        void setNome(string nome);

        int getIdade();
        string getTelefone();
        string getNome();

};

#endif // PESSOA_H_INCLUDED
