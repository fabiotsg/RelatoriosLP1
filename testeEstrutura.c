#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char nome[20];
    int matricula;
    float n1,n2;
}tmedia,*tptmedia;

void exibeEextrutura(struct tmedia){
    int i;
    for(i=0;i<MAX_QUANTIDADE;i++){
        printf("\n\naluno: %s, matricula: %d,"
               "nota 1: %.1f, nota 2: %.1f, media: %.1f",media[i].nome,media[i].matricula,media[i].n1,media[i].n2,(media[i].n1+media[i].n2)/2);
    }

}


#define MAX_QUANTIDADE 2
int main()
{
    tmedia media[MAX_QUANTIDADE];
    tptmedia ptmedia=&media;

    int i;
    for(i=0;i<MAX_QUANTIDADE;i++){
        printf("digite o nome do %d aluno ",i+1);
        scanf("%s*c",media[i].nome);
        printf("\ndigite a matricula do aluno %d: ",i+1);
        scanf("%d",media[i].matricula);
        printf("\ndigite as duas notas do aluno ");
        scanf("%f%f",media[i].n1,media[i].n2);
        printf("\n");
    }
    for(i=0;i<MAX_QUANTIDADE;i++){
        printf("\n\naluno: %s, matricula: %d,"
               "nota 1: %.1f, nota 2: %.1f, media: %.1f",media[i].nome,media[i].matricula,media[i].n1,media[i].n2,(media[i].n1+media[i].n2)/2);
    }

    exibeEextrutura(tmedia);
    return 0;
}
