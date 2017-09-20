#ifndef TELEVISAO_H_INCLUDED
#define TELEVISAO_H_INCLUDED

class Televisao
{
    private:
        int volume, canal;

    public:
        Televisao();
        virtual~Televisao();

        int getVolume();
        int getCanal();

        void setVolume(int v);
        void setCanal(int c);

        void AumentaVolume(int v);
        void DiminuiVolume(int c);

        void AumentaCanal(int c);
        void DiminuiCanal(int c);
};

#endif // TELEVISAO_H_INCLUDED
