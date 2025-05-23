#include <stdio.h>
#include <stdlib.h>
int ehprimo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n ; i++) {
        if (n % i == 0) {
            return 0;
        }
    } 
    return 1;
}
int digPprimos (int **matriz, int linhas) {
    int cont = 0;
    for (int i = 0; i < linhas; i++) {
            if (ehprimo(matriz[i][i])) {
                cont++;
            }  
    return cont;
}
}
int main() {
    int linhas;
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &linhas);
    int **matriz = (int **)malloc(linhas * sizeof(int));
    for (int i=0; i<linhas; i++){
        for (int j=0; j<linhas; j++){
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("A quantidade de elementos primos na diagonal principal e: %d\n", digPprimos(matriz, linhas));
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}