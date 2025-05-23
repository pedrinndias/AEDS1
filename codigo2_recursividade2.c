#include <stdio.h>
int soma (int n) {
    if (n == 1) {
        return 1;
    } else { if (n >= 1) {
        return n + soma(n - 1);
    }
}
}
int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    printf("A soma dos primeiros %d numeros inteiros positivos e: %d\n", n, soma(n));
    return 0;
}