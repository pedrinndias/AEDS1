#include <stdio.h>
void preencheValores (int vetor[]) {
    for (int i = 0; i < 10; i++) {
        printf("Digite o %d elemento do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}
void copiaNegativos (int vetor[], int vetorNegativos[],int contador) {
    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetorNegativos[contador] = vetor[i];
            contador++;
        }
    }
    vetorNegativos[contador+1] = 0;
}
int main() {
    int vetor[10];
    int vetorNegativos[11];
    int contador = 0;
    preencheValores(vetor);
    copiaNegativos(vetor, vetorNegativos, contador);
    printf("Os valores negativos do vetor sao:\n");
    for (int i = 0; i < 10; i++) {
        if (vetorNegativos[i] < 0) {
            printf("%d ", vetorNegativos[i]);
        }
    }
    printf("\n");
    return 0;
}