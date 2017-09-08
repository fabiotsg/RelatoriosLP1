#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

using namespace std;

class Data{

    private:

        int dia, mes, ano;

    public:

        Data();
        void avancaDia();
        bool verificaData();

        int getDia();
        int getMes();
        int getAno();
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);

};

#endif // DATA_H_INCLUDED
