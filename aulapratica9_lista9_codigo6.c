#include <stdio.h> 
#define LINHAS 2
#define COLUNAS 3
int main() {
    int matriz[LINHAS][COLUNAS];
    int matrizTransposta[COLUNAS][LINHAS];
    int soma = 0;
    printf("Digite os valores para preencher a matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nMatriz original:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizTransposta[j][i] = matriz[i][j];
        }
    }
    printf("\nMatriz transposta:\n");
    for (int i = 0; i < COLUNAS; i++) {
        for (int j = 0; j < LINHAS; j++) {
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            soma += matriz[i][j];
        }
    }
    printf("\nA soma dos elementos da matriz e: %d\n", soma);
    return 0;
}