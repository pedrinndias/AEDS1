#include <stdio.h>
int somaDig(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) + somaDig(n / 10);
    }
}
int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Soma dos digitos de %d = %d\n", n, somaDig(n));
    return 0;
}