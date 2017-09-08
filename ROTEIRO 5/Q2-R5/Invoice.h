#ifndef INVOICE_H_INCLUDED
#define INVOICE_H_INCLUDED
#include<string>

using namespace std;

class Invoice{

    private:

        int quant;
        float preco;
        string desc;

    public:
        InvoiceM();

        void setQuant(int q);
        void setPreco(float p);
        void setDesc(string d);

        int getQuant();
        float getPreco();
        string getDesc();
        float getInvoiceAmount();

};

#endif // INVOICE_H_INCLUDED
