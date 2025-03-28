#include<stdio.h>
void calculaOperacoes (int a, int b, int *soma, int *produto){
    *soma= a + b;;
    *produto = a * b;
    return;
}
int main(){
    int val1, val2, soma=0, produto=1;
    printf("Escreva dois valores inteiros: ");
    scanf("%d%d", &val1, &val2);
    calculaOperacoes (val1, val2, &soma, &produto);
    printf("A soma eh: %d\n", soma);
    printf("O produto eh: %d\n", produto);
    return 0;
}