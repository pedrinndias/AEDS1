#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int soma_elementos (int *vetor, int N){
    srand(time(NULL));
    int soma=0;
    for (int i=0; i < N; i++){
        vetor[i] = (rand()%10 + 1);
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
    printf("%d", soma_elementos (vetor, N));
    free(vetor);
    return 0;
}