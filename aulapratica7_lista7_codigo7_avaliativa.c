#include <stdio.h>
int potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    return base * potencia(base, expoente - 1);
}
int main() {
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    if (expoente < 0) {
        printf("Este programa não suporta expoentes negativos.\n");
        return 1;
    }
    printf("%d elevado a %d é: %d", base, expoente, potencia(base, expoente));
    return 0;
}
