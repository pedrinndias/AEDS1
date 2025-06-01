#include<stdio.h>
#include<stdlib.h>
float medAbaiDiagPrin(int *matriz, int tamanho){
    int cont = 0;
    float media=0.00;
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            if(i > j){ 
                media += *(matriz+i*tamanho + j);
                cont++;
            }
        }
    }
    return (media/cont);
}
int main(){
    int tamanho;
    int *matriz;
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);
    matriz = (int *)malloc(tamanho * tamanho * sizeof(int));
    if(matriz == NULL){
        printf("Memoria insuficiente!\n");
        return 1;
    }
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            printf("Digite o valor da matriz[%d][%d]: ", i, j);
            scanf("%d", (matriz + i * tamanho + j));
        }
    }
    printf("Media dos elementos abaixo da diagonal principal: %.2f\n", medAbaiDiagPrin(matriz, tamanho));
    free(matriz);
    return 0;
}