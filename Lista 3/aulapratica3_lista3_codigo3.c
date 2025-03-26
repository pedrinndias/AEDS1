#include<stdio.h>
int main(){
    int num1, num2, maior;

    scanf("%d%d", &num1, &num2);
    printf("Escreva dois numeros inteiro");
    maior = num1 > num2 ? num1:num2;
    printf("O numero maior é :%d", maior);
    return 0;
}