#include <stdio.h>
int main() {
    int numero, quantImpares = 0, quantN = 0;
    float soma = 0;
    do {
        printf("Escreva um numero: ");
        scanf("%d", &numero);
        if (numero != 0) {
            soma += numero;
            quantN++; 
        if (numero % 2 != 0) {
                quantImpares++;
         }
        }
    } while (numero != 0);
    if (quantN > 0) {
        printf("A media dos numeros eh: %f\n", soma / quantN);
    }
        printf("A quantidade de numeros impares eh: %d\n", quantImpares);
    return 0;
}
