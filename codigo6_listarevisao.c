#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 3
int main(){
    srand(time(NULL));
    int *matriz;
    matriz=(int *)malloc(TAM*sizeof(int));
    if(matriz==NULL){
        printf("Falha");
        return 1;
    }
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            *(matriz+i*TAM+j) = rand()%50 + 1;
            printf("Matriz[%d][%d]= %d\n", i, j, *(matriz+i*TAM+j));
        }
    }
    free(matriz);
    return 0;
}