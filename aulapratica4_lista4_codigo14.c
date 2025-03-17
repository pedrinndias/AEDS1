#include<stdio.h>
int main(){
    int denominador, n;
    float soma, numerador;
    printf("Escreva um numero inteiro: ");
    scanf("%d", &n);
    soma=0;
    if(n==1){
        soma=1;
    } else for (int i = 1; i <= n; i++){
        numerador = i;
        denominador = i+1;
        soma = soma + numerador/denominador;
    }
    printf("O valor da soma e: %.2f\n", soma);
    return 0;
}