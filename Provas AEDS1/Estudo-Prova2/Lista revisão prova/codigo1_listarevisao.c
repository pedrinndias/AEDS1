#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int verificaRepeticao(int posicao, int num, int *vetor) {
    for (int i = 0; i < posicao; i++) {
        if (vetor[i] == num) {
            return 1;
        }
    }
    return 0;
}
int main() {
    srand(time(NULL));
    int vetor[20];
    for (int i = 0; i < 20; i++) {
        vetor[i] = rand() % 100 + 1;
        if (i > 0) {
            while (verificaRepeticao(i, vetor[i], vetor)) {
                vetor[i] = rand() % 100 + 1;
            }
        }
    }
    printf("Valores do vetor:\n");
    for (int i = 0; i < 20; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}