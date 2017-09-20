#include <iostream>
#include "Relogio.h"
#include "RelogioTeste.h"

using namespace std;

int main()
{
    Relogio r1;
    RelogioTeste r2;
    int h, m, s;

    cout << "Digite a hora:\n";
    cin >> h >> m >> s;

    /**r1.setHorario(h, m , s);

    r1.avancarHorario(h,m,s);

    h = r1.getHora();
    m = r1.getMinuto();
    s = r1.getSegundo();*/

    r2.r.setHorario(h,m,s);

    h = r2.r.getHora();
    m = r2.r.getMinuto();
    s = r2.r.getSegundo();

    r2.r.avancarHorario(h,m,s);

    h = r2.r.getHora();
    m = r2.r.getMinuto();
    s = r2.r.getSegundo();

    cout << "Horario no proximo segundo: " << h << ":" << m << ":" << s << "\n";

    return 0;
}
