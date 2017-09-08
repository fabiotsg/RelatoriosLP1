#ifndef EMPREGADO_H_INCLUDED
#define EMPREGADO_H_INCLUDED
#include <string>

using namespace std;

class Empregado{

    private:
        string nome, sbn;
        float salario;

    public:

        Empregado();

        void setNome(string nome);
        void setSbn(string sbn);
        void setSalario(float salario);

        string getNome();
        string getSbn();
        float getSalario();

};

#endif // EMPREGADO_H_INCLUDED
