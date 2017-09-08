#ifndef CONTROLEDEPAGAMENTOS_H_INCLUDED
#define CONTROLEDEPAGAMENTOS_H_INCLUDED
#include "Pagamento.h"
#include <string>

using namespace std;

class ControleDePagamentos{

    public:
        Pagamento pagamentos[2];

        ControleDePagamentos();

        void setPagamentos(Pagamento p[], int i);

        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario();
};

#endif // CONTROLEDEPAGAMENTOS_H_INCLUDED
