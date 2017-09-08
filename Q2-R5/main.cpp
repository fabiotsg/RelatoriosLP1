#include <iostream>
#include "Invoice.h"
#include<string>
#include "InvoiceTest.h"

using namespace std;

int main(){

    Invoice v;
    InvoiceTest v2;
    int quant, i;
    float preco;
    string desc;


        cout << "Digite o nome do produto\n";
        cin >> desc;

        cout << "Digite a quantidade\n";
        cin >> quant;

        cout << "Digite o preco\n";
        cin >> preco;

        v.setDesc(desc);
        v.setQuant(quant);
        v.setPreco(preco);



    cout << "A fatura da compra : " << v.getInvoiceAmount() << endl;


    return 0;
}
