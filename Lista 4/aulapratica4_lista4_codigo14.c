#include<stdio.h>
int main(){
    int n;
    float soma=0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        soma = soma + (1.0/i);
    }
    printf("Soma: %.2f\n", soma);
    return 0;
}
