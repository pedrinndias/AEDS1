#include<stdio.h>
#include<stdlib.h>
int main(){
    int linhas, coluna, **matriz, soma=0;
    printf("Digite o numero de linhas e colunas da matriz: ");
    scanf("%d %d", &linhas, &coluna);
    matriz = (int**) malloc(linhas * sizeof(int*));

    if (matriz == NULL) {
        printf("Memoria insuficiente\n");
        return 1;
    }
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(coluna * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Memoria insuficiente\n");
            return 1;
        }
    }
    for (int i=0; i < linhas; i++){
        for( int j=0; j < coluna; j++){
            printf("Digite o valor da matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    printf("soma dos valores da matriz: %d\n", soma);
    free(matriz);
    return 0;
}