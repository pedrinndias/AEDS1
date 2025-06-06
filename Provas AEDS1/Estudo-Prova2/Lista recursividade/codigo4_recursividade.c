#include <stdio.h>
int potencia(int base, int exp) {
    if (exp == 0) {
        return 1;
    } else {
        return base * potencia(base, exp - 1);
    }
}
int main() {
    int base, exp;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &exp);
    printf("%d elevado a %d = %d\n", base, exp, potencia(base, exp));
    return 0;
}