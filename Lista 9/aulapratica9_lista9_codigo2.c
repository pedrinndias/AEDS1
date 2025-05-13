#include <stdio.h>
void preencheVetor(int vetor[]) {
    int contador = 0;
    int numeroNatural = 1;
    while (contador < 100) {
        if (numeroNatural % 6 != 0 && numeroNatural % 10 != 6) {
            vetor[contador] = numeroNatural;
            contador++;
        }
        numeroNatural++;
    }
}
int main() {
    int meuVetor[100];
    preencheVetor(meuVetor);
    printf("Vetor preenchido com os 100 primeiros numeros naturais nao multiplos de 6 e nao terminados em 6:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d\n ", meuVetor[i]);
    }
    return 0;
}
