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
    void calculaOperacoes (val1, val2);
    printf("A soma eh: %d", soma);
    printf("O produto eh: %d", produto);
    return 0;
}