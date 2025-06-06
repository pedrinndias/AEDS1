#include <stdio.h>
#include <stdlib.h>
int main(){
    int tam, *vetor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    vetor = (int*) malloc(tam * sizeof(int));
    if (vetor == NULL) {
        printf("Memoria insuficiente\n");
        return 1;
    }
    for (int i = 0; i < tam; i++) {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    printf("Valores do vetor:\n");
    for (int i = 0; i < tam; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    free(vetor);
    return 0;
}