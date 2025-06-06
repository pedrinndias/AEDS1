#include <stdio.h>
int soma_digitos(int n) {
    int soma = 0;
    int temp = n;
    while (temp > 0) {
        soma += temp % 10;
        temp /= 10;
    }
    return soma;
}
int main() {
    int s, a, b;
    scanf("%d", &s);
    scanf("%d", &a);
    scanf("%d", &b);
    int menor_numero = -1;
    int maior_numero = -1;
    for (int i = a; i <= b; i++) {
        if (soma_digitos(i) == s) {
            menor_numero = i;
            break; 
        }
    }
    for (int i = b; i >= a; i--) {
        if (soma_digitos(i) == s) {
            maior_numero = i;
            break; 
        }
    }
    printf("%d\n", menor_numero);
    printf("%d\n", maior_numero);
    return 0;
}