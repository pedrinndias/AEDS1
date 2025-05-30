#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 20
int verificaRepeticao(int *vetor, int posicao){
    if(posicao==0){
        return *vetor + posicao;
    }else{
        if(*vetor+posicao==verificaRepeticao(vetor-1, posicao-1)){
            return 1;
    }else{
            return 0;
        }
    }
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
  