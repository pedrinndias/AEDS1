#include <stdio.h>
int main(){
    int n, positivo=0, negativo=0;
    do{
    printf("Escreva um numero inteiro: ");
    scanf("%d", &n);
    if(n>0){
        positivo++;
    } else if(n<0){
        negativo++;
    }
    }while(n!=0);
    printf("Quantidade de numeros positivos: %d\n", positivo);
    printf("Quantidade de numeros negativos: %d\n", negativo);
    return 0;
}