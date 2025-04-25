#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void buscvetor (int vetor[], int num){
    int verificador;
    for (int i=0; i<20; i++)
    if (num == vetor[i]){
        printf ("O numero aparece na posicao: %d\n", vetor[i]);
        verificador++;
    }
    if (verificador == 0)
        printf("O numero nao aparece no intervalo");
    return;
}

int main(){
    int vetor[20];
    int num;
    srand (time(NULL));
    for (int i=0; i<20; i++){
        vetor[i]=(rand()/100)+1;
    }
    printf("Escreva um numero para ser buscado:\n");
    scanf("%d", &num);
    buscvetor (vetor,num);
}