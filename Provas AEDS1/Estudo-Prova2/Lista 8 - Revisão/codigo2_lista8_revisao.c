#include<stdio.h>
#include<stdlib.h>
#define TAM 10
int main(){
    float *vetor;
    vetor = (float*) malloc(TAM * sizeof(float));
    if (vetor == NULL) {
        printf("Memoria insuficiente\n");
        return 1;
    }
    for (int i = 0; i < TAM; i++) {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%f", &vetor[i]);
    }
    float maior = vetor[0];
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] == maior) {
            printf("%.1f na posicao %d\n", vetor[i], i);
        }
    }
    free(vetor);
    return 0;
}