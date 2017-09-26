#include <iostream>
#include "FigurasGeometricas.h"

using namespace std;

FigurasGeometricas::FigurasGeometricas(){
}
void FigurasGeometricas::calcularArea(int x){
    float l, r, h, area;
    if(x==1){
        cout << "digite o lado do quadrado" << endl;
        cin >> l;
        area = l*l;
        cout << area << endl;
    }
    else  if(x==2){
        cout << "digite o raio do circulo" << endl;
        cin >> r;
        area = r*r*3.14;
        cout << area << endl;
    }else  if(x==3){
        cout << "digite a base e a altura do triangulo" << endl;
        cin >> l >> h;
        area = (l*h)/2;
        cout << area << endl;
    }
}
