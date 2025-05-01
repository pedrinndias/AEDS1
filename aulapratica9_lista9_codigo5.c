#include <stdio.h>
void preencheValores(int vetor[]) {
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}
int copiaNegativos(int vetor[], int vetorNegativos[]) {
    int indiceNegativos = 0;
    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetorNegativos[indiceNegativos] = vetor[i];
            indiceNegativos++;
        }
    }
    vetorNegativos[indiceNegativos] = 0;
    return indiceNegativos;
}
int main() {
    int vetor[10];
    int vetorNegativos[11];
    int numNegativos;
    preencheValores(vetor);
    numNegativos = copiaNegativos(vetor, vetorNegativos);
    printf("\nOs valores negativos do vetor sao:\n");
    for (int i = 0; i < numNegativos; i++) {
        printf("%d ", vetorNegativos[i]);
    }
    printf("\n");
    return 0;
}
