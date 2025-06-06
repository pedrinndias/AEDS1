#include<stdio.h>
#include<stdlib.h>
int somaElementos(int *vetor, int tamanho){
    if(tamanho == 0){
        return 0;
    } else {
        return *vetor + somaElementos(vetor+1, tamanho - 1);
    }
}
int main(){
    int tamanho;
    int *vetor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vetor = (int *)malloc(tamanho * sizeof(int));
    if(vetor == NULL){
        printf("Memoria insuficiente!\n");
        return 1;
    }
    for(int i = 0; i < tamanho; i++){
        printf("Digite o valor do vetor[%d]: ", i);
        scanf("%d", (vetor + i));
    }
    printf("Soma dos elementos do vetor: %d\n", somaElementos(vetor, tamanho));
    free(vetor);
    return 0;
}
