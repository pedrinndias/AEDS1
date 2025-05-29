#include<stdio.h>
#include<stdlib.h>
#define TAM 5
int main(){
    int *vetor1, *vetor2;
    vetor1 = (int*) malloc(TAM * sizeof(int));
    vetor2 = (int*) malloc(TAM * sizeof(int));
    if (vetor1 == NULL || vetor2 == NULL) {
        printf("Memoria insuficiente\n");
        return 1;
    }
    for (int i = 0; i < TAM; i++) {
        printf("Digite o valor do vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
        printf("Digite o valor do vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }
    int *vetorSoma;
    vetorSoma = (int*) malloc(TAM * sizeof(int));
    if (vetorSoma == NULL) {
        printf("Memoria insuficiente\n");
        return 1;
    }
    for (int i = 0; i < TAM; i++) {
        vetorSoma[i] = vetor1[i] + vetor2[i];
        printf("vetorSoma[%d] = %d\n", i, vetorSoma[i]);
    }
    free(vetor1);
    free(vetor2);
    free(vetorSoma);
    return 0;
}