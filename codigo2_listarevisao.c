#include<stdio.h>
#include<stdlib.h>
int main(){
    int *vetor, aux=0;
    vetor = (int*) malloc(10 * sizeof(int));
    if (vetor == NULL) {
        printf("Memoria insuficiente\n");
        return 1;
    }
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
        if(vetor[i] %2 == 0){
            aux++;
        }
    }
    int *vetorPar, j=0;
    vetorPar = (int*) malloc(aux * sizeof(int));
    if (vetorPar == NULL) {
        printf("Memoria insuficiente\n");
        free(vetor);
        return 1;
    }
    for(int i=0; i<10;i++){
        if(vetor[i] %2 == 0){
            if(j < aux) {
                vetorPar[j] = vetor[i];
                j++;
            }
        }
    }
    printf("Valores do vetorPar:\n");
    for(int i=0; i<aux; i++){
        printf("vetorPar[%d] = %d\n", i, vetorPar[i]);
    }
    free(vetor);
    free(vetorPar);
    return 0;
}
        