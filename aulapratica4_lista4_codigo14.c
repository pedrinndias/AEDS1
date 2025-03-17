#include<stdio.h>
int main(){
    int denominador, n,numerador=1;
    float soma=0;
    printf("Escreva um numero inteiro: ");
    scanf("%d", &n);
    if(n==1){
        soma=1;
    } else for (int i = 1; i <= n; i++){
        denominador = i+1;
        soma = 1+(numerador/denominador);
    }
    printf("O valor da soma e: %.2f\n", soma);
    return 0;
}