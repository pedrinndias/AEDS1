#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 6
int verificaRapeticao(int posicao, int num, int *vetor) {
    for (int i = 0; i < (posicao--); i++) {
        if (vetor[i] == num) {
            return 1; 
        }
    }
    return 0;
}
int main(){
    srand(time(NULL));
    int *vetor;
    vetor = (int*) malloc(TAM * sizeof(int));
    if (vetor == NULL) {
        printf("Memoria insuficiente\n");
        return 1;
    }
    for(int i=0; i<TAM; i++){
        vetor[i] = rand() % 60 + 1;
        if (i > 0){ 
            while(verificaRapeticao(i, vetor[i], vetor)){
                vetor[i] = rand() % 60 + 1; 
            }
        }
    }
    printf("Valores do vetor:\n");
    for(int i=0; i<TAM; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    free(vetor);
    return 0;
}
