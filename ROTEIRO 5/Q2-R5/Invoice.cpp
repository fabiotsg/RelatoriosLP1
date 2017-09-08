#include "Invoice.h"
#include "InvoiceTest.h"
#include <string>

using namespace std;

Invoice::InvoiceM(){
    quant;
    preco;
    desc;
}

void Invoice::setQuant(int q){
    this->quant = q;
}

void Invoice::setPreco(float p){
    this->preco = p;
}

void Invoice::setDesc(string d){
    this->desc = d;
}

int Invoice::getQuant(){
    return quant;
}

float Invoice::getPreco(){
    return preco;
}

string Invoice::getDesc(){
    return desc;
}

float Invoice::getInvoiceAmount(){
    float fatura;

        if(quant < 0 || preco < 0){
                fatura = 0;
            return fatura;
        }else{
            fatura = preco*quant;
            return fatura;
        }
}
