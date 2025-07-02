#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int vetor[20];
int *mult;
int tam =0;
srand (time(NULL));
for(int i =0; i < 20; i++){
    vetor[i] = rand () % 100 +1;
}
for(int i =0; i < 20; i++){
    if(vetor[i] % 3 == 0){
        tam++;
    }
}
mult = (int *) malloc(tam * sizeof(int));
if(mult == NULL){
    printf("Erro de alocacao do  segundo vetor!");
    return 1;
}
int *aux = mult;
for(int i = 0; i < 20;i++){
    if(vetor[i] % 3 == 0){
        *aux = vetor[i];
        aux++;
    }
}
printf("Aqui estao os valores do segundo vetor: \n ");
for(int i = 0; i < tam; i++){
    printf("%d ", *(mult + i));
}

return 0;
}