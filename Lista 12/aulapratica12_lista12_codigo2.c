#include <stdio.h>
#include <stdlib.h>
int soma_elementos (int *vetor, int N){
    int soma=0;
    for (int i=0; i < N; i++){
        soma += vetor[i];
    }
    return soma;
}

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
    printf("%d", soma_elementos (vetor, N));
    free(vetor);
    return 0;
}