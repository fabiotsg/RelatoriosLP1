//questao 1
/**
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int maior, i, ar[100];

    maior = 0;

    cout << "digite um numero\n";
    for(i=0; i < 100; i++){
        cin >> ar[i];
        if(ar[i] == 0){
            break;
        }
        if(ar[i] > maior){
            maior = ar[i];
        }
        i++;
    }
    cout << "o maior numero digitado foi ";
    cout << maior << " ";

}*/


//questao 2

/**
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()

{
    int n,jogar;
    cout << "Vamos brincar de adivinhar um numero\n";
    srand(time(0));
    n=(rand()%100)+1;
    while (1)
    {
       cout << "digite um numero  ";
        cin >> jogar;
            if(jogar>n)
            {
                cout <<"\nmuito alto\n\n";
            }
                else if (jogar<n)
            {
                cout <<"\nmuito baixo\n\n";
        }else if(n==jogar){
            cout<<"\nvc acertou parabens n = ";
            cout<< n;
            break;
        }
    }
return 0;*/

//questao 3

/**

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int n, alet, i = 0;
    float a, b, c, d, e, f;
    a = b = c = d = e = f = 0;

    cout << "QUANTAS VEZES VOCE QUER JOGAR O DADO?\n";
    cin >> n;

    srand(time(0));
    while(i < n){
        alet = (rand()%6) + 1;

        if(alet == 1){
            a++;
        }
        if(alet == 2){
            b++;
        }
        if(alet == 3){
            c++;
        }
        if(alet == 4){
            d++;
        }
        if(alet == 5){
            e++;
        }
        if(alet == 6){
            f++;
        }
        i++;
        //alet = 0;
    }

   cout << "AS PORCENTAGENS DE CADA FACE FORAM:\n";
   cout << "LADO 1: " <<(a*100/n) << "%%\n" << "LADO 2: " << (b*100/n) << "%%\n" << "LADO 3: " << (c*100/n) << "%%\n";
   cout << "LADO 4: " <<(d*100/n) << "%%\n" << "LADO 5: " <<(e*100/n) << "%%\n" << "LADO 6: " << (f*100/n) << "%%\n";

}*/
//questão 4
/**
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float Percent(int c, int k){
    float f;

    f =((float)c*100)/(float)k;
    return f;
}

int main(){

    int votos[100], i = 0, c = 0, j =0, k, a = 0, maior = 0, indice = 0;
    int camisa[23] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    float f, maiorf = 0;

    printf("Enquete: Quem foi o melhor jogador?\n\n");

    while (1) {
        printf("Numero do jogador (0=fim):\n");
        scanf("%d", &votos[i]);
        if (votos[i] == 0)
            break;

        if(votos[i] < 1 || votos[i] > 23){
            a++;
        }
        i++;
    }

    k = i-a;

    printf("\nResultado da votacao:\n\nForam computados %d votos\nJogador votos\n\n", k);

     for(i = 0; i < 23; i++){
        c = 0;

        for(j=0; j < k; j++){
            if(camisa[i] == votos[j]){
                c++;
            }
        }
        f = Percent(c,k);

        if(c > maior){
            maior = c;
            indice = i;
        }

        if(f > maiorf){
            maiorf = f;
        }

        if(c != 0){
            printf("%d\t %d \t %.2f%%\n", i + 1, c, f);
        }
    }

    printf("\nO melhor jogador foi o numero %d, com %d votos, correspondendo a %.2f%% dos votos.\n", indice + 1, maior, maiorf);

    return 0;
}*/

//questao 4

/**
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;



float Percent(int c, int k){
    float f;

    f =((float)c*100)/(float)k;
    return f;
}

int main(){

cout.precision(2);
//   std::cout.precision(2);
//    std::cout << std::fixed << variavel;  (Serve para colocar dois dígitos nos float)

    int votos[100], i = 0, c = 0, j =0, k, a = 0, maior = 0, indice = 0;
    int camisa[23] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    float f, maiorf = 0;

    cout << "Enquete: Quem foi o melhor jogador?" << endl;

    while (1) {
        cout << "Numero do jogador (0=fim):" << endl;
        cin >> votos[i];
        if (votos[i] == 0)
            break;

        if(votos[i] < 1 || votos[i] > 23){
            a++;
        }
        i++;
    }

    k = i-a;

    cout << "\nResultado da votacao:\n\nForam computados " << fixed << k << " votos\nJogador votos" << endl;

     for(i = 0; i < 23; i++){
        c = 0;

        for(j=0; j < k; j++){
            if(camisa[i] == votos[j]){
                c++;
            }
        }
        f = Percent(c,k);

        if(c > maior){
            maior = c;
            indice = i;
        }

        if(f > maiorf){
            maiorf = f;
        }

        if(c != 0){
         cout << fixed << i+1 <<"\t " << fixed << c << " \t " << fixed << f << "%" << endl;
        }
    }

    cout << "\nO melhor jogador foi o numero " << fixed << indice + 1 << ", com " << fixed << maior <<"votos, correspondendo a " << fixed << maiorf << "% dos votos."  << endl;

    return 0;
}
*/
