#include <stdio.h>
void preencherVetor(int vetor[]) {
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}
int encontrarPosicaoMenor(int vetor[]) {
    int posMenor = 0;
    int menorValor = vetor[0];
    for (int i = 1; i < 5; i++) {
        if (vetor[i] < menorValor) {
            menorValor = vetor[i];
            posMenor = i;
        }
    }
    return posMenor;
}
void trocarEImprimir(int vetor[], int posMenor) {
    if (posMenor != 0) {
        int temp = vetor[0];
        vetor[0] = vetor[posMenor];
        vetor[posMenor] = temp;
    }
    printf("\nVetor apos trocar o menor elemento (%d) com o primeiro:\n", vetor[0]);
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
int main() {
    int meuVetor[5];
    int posicaoDoMenor;
    preencherVetor(&meuVetor[]);
    posicaoDoMenor = encontrarPosicaoMenor(&meuVetor[]);
    trocarEImprimir(&meuVetor[], posicaoDoMenor);
    return 0;
}
