#include <stdio.h>
int ehPrimo(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0){
            return 0;
        }
    }
    return 1;
}
void primoIntervalo(int menor, int maior) {
    int encontrouPrimo = 0;
    for (int i = menor; i <= maior; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
            encontrouPrimo = 1;
        }
    }
    if (!encontrouPrimo) {
        printf("Não existem números primos no intervalo informado.");
    }
    printf("\n");
}
int main(){
    int a, b, maior, menor;
    printf("Escreva dois numeros: ");
    scanf("%d %d", &a, &b);
    maior = a>b ? a:b;
    menor = a<b ? a:b;
    primoIntervalo(menor, maior);
    return 0;
}