#ifndef PAGAMENTO_H_INCLUDED
#define PAGAMENTO_H_INCLUDED
#include <string>

using namespace std;

class Pagamento{

    private:
        double valorPagamento;
        string nomeDoFuncionario;

    public:

        Pagamento();

        double getValor();
        string getNome();

        void setValor(double v);
        void setNome(string n);

};

#endif // PAGAMENTO_H_INCLUDED
