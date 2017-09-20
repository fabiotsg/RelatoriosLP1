#include <iostream>
#include "Televisao.h"
#include "TelevisaoTeste.h"

using namespace std;

int main()
{
    Televisao tv;
    TelevisaoTeste tv2, tv3;
    int v, c, op;

    cout << "Configure o volume e canal\n";
    cin >> v >> c;

    tv3.tv1.setVolume(v);
    tv3.tv1.setCanal(c);

    while(1){
        cout << "Opicoes do controle:\n";
        cout << "1- Consutar Volume e Canal atual\t" << "2- Aumentar volume\t" << "3- Diminuir Volume\t" <<
                "4- Avancar um canal\n" << "5- Voltar um canal\t\t" << "\t6 - Mudar canal\t" << "\t0 - DESLIGAR A TV\n";
        cin >> op;

        c = tv3.tv1.getCanal();
        v = tv3.tv1.getVolume();

        switch(op){
            case 0:
                return-1;
                break;
            case 1:
                cout << "\n----CANAL ATUAL : " << c << " VOLUME ATUAL: " << v << "----\n\n";
                break;
            case 2:
                tv3.tv1.AumentaVolume(v);
                break;
            case 3:
                tv3.tv1.DiminuiVolume(v);
                break;
            case 4:
                tv3.tv1.AumentaCanal(c);
                break;
            case 5:
                tv3.tv1.DiminuiCanal(c);
                break;
            case 6:
                cout << "Digite o canal que deseja selecionar :\n";
                cin >> c;
                tv3.tv1.setCanal(c);
                break;
        }

    }

    return 0;
}
