#include<stdio.h>
int main(){
    int denominador, n;
    float soma=0;
    printf("Escreva um numero inteiro: ");
    scanf("%d", &n);
    if(soma==0){
        printf("O valor da soma e: 0\n");
    } 
    if(n==1){
        soma=1;
    } else if(n>=2){
        for (int i = 1; i <= n; i++){
        denominador = i+1;
    }
    }
    soma = 1+1/denominador;
    printf("O valor da soma e: %2.f\n", soma);
    return 0;
}