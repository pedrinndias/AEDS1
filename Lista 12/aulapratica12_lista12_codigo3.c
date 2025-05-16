#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor, N;
    printf("Escreva o tamanho do vetor: \n");
    scanf("%d", &N);
    vetor = (int *) malloc(N * sizeof(int));
    if (vetor==NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }
    for (int i=0; i< N; i++){
        printf("Escreva um valor para variavel %i para o vetor :\n", i);
        scanf("%d", &vetor[i]);
    }
    for (int i=0; i<N; i++){
        printf("%d\n", vetor[i]);
    }
    free(vetor);
    return 0;
}