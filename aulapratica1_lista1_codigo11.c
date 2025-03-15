#include <stdio.h>
int main(){
    float num, den, res;
    printf("Escreva dois numeros reais referentes a numerador e denominador: ");
    scanf("%f %f", &num, &den);
    res=num/den;
    printf("O resultado da divisao de %.2f por %.2f eh: %.2f\n", num, den, res);
    return 0;

}