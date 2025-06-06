// Implemente um programa em C que leia um vetor de 10 números inteiros.
// Em seguida, o programa deve criar um segundo vetor contendo apenas os números
// pares do primeiro vetor, utilizando alocação dinâmica e ponteiros.
// O programa deve imprimir os elementos do segundo vetor.



#include<stdio.h>
#include<stdlib.h>
#define TAM 10
int main(){
    int *vetor;
    int *vetorPar;
    int contPar=0;
    vetor = (int*)malloc(TAM*sizeof(int));
    if(vetor==NULL){
        printf("Falha ao alocar memoria");
        return 1;
    }
    for(int i=0; i < TAM; i++){
        printf("Preencha o vetor[%d]: \n", i);
        scanf("%d",&vetor[i]);
        if((vetor[i]%2)==0){
            contPar++;
        }
    }
    vetorPar=(int *)malloc(contPar*sizeof(int));
    if(vetorPar==NULL){
        printf("Falha ao alocar memoria");
        return 1;
    }
    int aux=0;
    for (int i=0; i<TAM; i++){
        if ((vetor[i]%2)==0){
            vetorPar[aux]=vetor[i];
            aux++;
        }
    }
    for(int i=0; i < contPar; i++){
        printf("vetorPAr[%d]= %d \n", i, vetorPar[i]);
    }
    free(vetor);
    free(vetorPar);
    return 0;
}