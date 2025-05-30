#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 20
int verificaRepeticao(int *vetor, int posicao){
    for (int i = 0; i < posicao; i++) {
        if (vetor[i] == vetor[posicao]) {
            return 1;
        }
    }
    return 0;
}
int main(){
    int vetor[TAM];
    srand(time(NULL));
    for(int i=0; i<TAM; i++){
        vetor[i] = rand()%100+1;
        while(verificaRepeticao(vetor, i)){
            vetor[i] = rand()%100+1;
        }
    }
    printf("Vetor: ");
    for(int i=0; i<TAM; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
  