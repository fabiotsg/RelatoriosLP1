#ifndef RELOGIO_H_INCLUDED
#define RELOGIO_H_INCLUDED

class Relogio
{
    private:
        int hora, minuto, segundos;

    public:
        Relogio();
        virtual ~Relogio();
        void setHorario(int h, int m, int s);
        void avancarHorario(int h, int m, int s);
        int getHora();
        int getMinuto();
        int getSegundo();
};

#endif // RELOGIO_H_INCLUDED
