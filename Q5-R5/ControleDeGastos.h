#ifndef CONTROLEDEGASTOS_H_INCLUDED
#define CONTROLEDEGASTOS_H_INCLUDED
#include<string>
#include "Despesa.h"

class ControleDeGastos{

    public:
        Despesa d1[2];
        ControleDeGastos();

        void setDespesas(Despesa d[], int i);
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo();

};


#endif // CONTROLEDEGASTOS_H_INCLUDED
