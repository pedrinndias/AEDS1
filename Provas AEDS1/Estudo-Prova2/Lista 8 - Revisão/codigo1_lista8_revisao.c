#include<stdio.h>
#include<stdlib.h>
#define TAM 10
int main(){
    int *vetor;
    vetor = (int*) malloc(TAM * sizeof(int));
    if (vetor == NULL) {
        printf("Memoria insuficiente\n");
        return 1;
    }
    for (int i = 0; i < TAM; i++) {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < TAM; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    free(vetor);
    return 0;
}
