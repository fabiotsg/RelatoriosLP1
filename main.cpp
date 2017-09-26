#include <iostream>
#include "quadrado.h"
#include "FigurasGeometricas.h"
#include "circulo.h"
#include "triangulo.h"

using namespace std;

int main()
{
    int n;
    Quadrado a1;
    circulo a2;
    triangulo a3;
    cout <<"digite 1 para quadrado" << endl;
    cout <<"digite 2 para circulo" << endl;
    cout <<"digite 3 para triangulo" << endl;
    cin >> n;
    if(n==1){
        a1.calcularArea(n);
    }else if(n==2){
        a2.calcularArea(n);
    }else if(n==3){
        a3.calcularArea(n);
    }
    return 0;
}
