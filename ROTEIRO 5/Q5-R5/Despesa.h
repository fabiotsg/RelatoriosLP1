#ifndef DESPESA_H_INCLUDED
#define DESPESA_H_INCLUDED
#include<string>
//#include "ControleDeGastos.h"

using namespace std;

class Despesa{

    private:
        double valor;
        string tipoDeGasto;

    public:

        Despesa();

        double getValor();
        string getTdg();

        void setValor(double v);
        void setTdg(string tdg);


};

#endif // DESPESA_H_INCLUDED
