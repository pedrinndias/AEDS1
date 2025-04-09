#include <stdio.h>
void cont_par(int *n, int *pares) {
    if (*n % 2 == 0 && *n != 0) {
        (*pares)++; 
    }
}
int main() {
    int num, pares = 0; 
    do { 
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
        cont_par(&num, &pares);
    } while (num != 0);
    printf("%d numeros pares\n", pares);
    return 0;
}
