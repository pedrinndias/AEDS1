#include <stdio.h>
int pertenceFibonacci(int num) {
    int a = 0, b = 1, c;
    if (num == 0 || num == 1) {
        return 1;
    }
    while (b <= num) {
        c = a + b;
        a = b;
        b = c;
        if (b == num) {
            return 1;
        }
    }
    return 0;
}
int main() {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    if (pertenceFibonacci(numero)) {
        printf("%d pertence a sequencia de Fibonacci.", numero);
    } else {
        printf("%d nao pertence a sequencia de Fibonacci.", numero);
    }
    return 0;
}
