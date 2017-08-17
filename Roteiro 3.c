#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/** QUESTAO 1 - ROTEIRO 3

int main(){

    int i;
    char nome[15];

    printf("Digite seu nome:\n");
    fgets(nome, 15, stdin);

    for(i = 0; nome[i] != '\0'; i++){
        printf("%c\n", nome[i]);
    }

    return 0;
}*/

/** QUESTAO 2 - ROTEIRO 3

int main(){

    int i, j;
    char nome[15];

    printf("Digite seu nome:\n");
    fgets(nome, 15, stdin);

    for(i = 0; nome[i] != '\0'; i++){
        for(j = 0; j < i; j++){
            printf("%c", nome[j]);
        }
        printf("\n");
    }

    return 0;
}*/

/** QUESTAO 3 - ROTEIRO 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, j, tam, c=1;
    char nome[21];
    printf("digite um nome ");
    fgets(nome, 21, stdin);
    tam = strlen(nome);
    j=tam-2;
    for(i=0; i<tam-1; i++){
     if(nome[j]==nome[i]){
       j--;
       c++;
    }
    }if(c == tam){
        printf("\neh palindromo\n\n");
    }else{
        printf("\nnao eh palindromo");
    }
    return 0;
}
*/

/** QUESTAO 4
typedef struct{
    char nome[31];
    char endereco[51];
    char matricula[11];
    char curso[31];
}tAluno;

int Matricula(tAluno gAlunos[], int n){
    int i;

    for(i = 0; i < n; i++){
        printf("Informe o nome do aluno #%d:\n", i+1);
        scanf("%s", gAlunos[i].nome);

        printf("Digite o endereco do aluno #%d:\n", i+1);
        scanf("%s", gAlunos[i].endereco);

        printf("Digite a matricula do aluno #%d:\n", i+1);
        scanf("%s", gAlunos[i].matricula);

        printf("Digite o curso do aluno #%d:\n", i+1);
        scanf("%s", gAlunos[i].curso);
    }
}

unsigned int ConsultaAlunosPorCurso(tAluno gAlunos[], int n){
    int i, c = 0;
    char curso2[31];

    printf("Informe o curso que deseja saber informacao:\n");
    scanf("%s", curso2);

    for(i = 0; i < n; i++){
        if(strstr(gAlunos[i].curso, curso2)){
            c++;
        }
    }
    return c;
}

int main(){

    tAluno gAlunos[100];
    int n;

    printf("Informe o valor de alunos que serao cadastrados:\n");
    scanf("%d", &n);

    Matricula(gAlunos, n);

    printf("Total de Alunos neste curso : %d\n", ConsultaAlunosPorCurso(gAlunos, n));

    return 0;
}*/

/** QUESTAO 6

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
