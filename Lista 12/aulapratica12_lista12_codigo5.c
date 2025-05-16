#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor, N;
    int valor;
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
    printf("Escreva o valor a ser buscado: \n");
    scanf("%d", &valor);
    int encontrado = 0;
    for (int i=0; i<N; i++){
        if (vetor[i] == valor){
            printf("Valor encontrado na posicao %d\n", i);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado){
        printf("Valor nao encontrado\n");
    }
    free(vetor);
    return 0;
}