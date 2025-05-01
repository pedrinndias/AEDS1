#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
void preencheMatriz(int matriz[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
}
void somaDiagonalPrincipal(int matriz[][MAX], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += matriz[i][i];
    }
    printf("Soma da diagonal principal: %d\n", soma);
}
void somaAbaixoDiagonal(int matriz[][MAX], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {   
            if (i > j) {
                soma += matriz[i][j];
            }
        }
    }
    printf("Soma dos elementos abaixo da diagonal principal: %d\n", soma);
}
void imprimeMatriz(int matriz[][MAX], int n) {
    printf("\nMatriz %dx%d gerada:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main() {
    int matriz[MAX][MAX];
    int n;
    printf("Digite o tamanho (n) da matriz quadrada (max %d): ", MAX);
    scanf("%d", &n);
    if (n <= 0 || n > MAX) {
        printf("Tamanho invalido. O tamanho deve ser entre 1 e %d.\n", MAX);
        return 1;
    }
    srand(time(NULL));
    preencheMatriz(matriz, n);
    imprimeMatriz(matriz, n);
    somaDiagonalPrincipal(matriz, n);
    somaAbaixoDiagonal(matriz, n);
    return 0;
}
