#include<stdio.h>
int main(){
    int num1, den, div;
    printf("Digite o numerador e o denominador: ");
    scanf("%d %d", &num1, &den);
    div = num1/den;
    printf("O resultado da divisao e: %d\n", div);
    return 0;
}
