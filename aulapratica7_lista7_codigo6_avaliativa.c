#include <stdio.h>
float soma(int n){
    int soma=0;
    for(int i = 1; i<=n; i++){
        soma += 1/i;
    }
    return soma;
}
int main(){
    int num;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    printf("A soma eh: %.2f\n", soma(num));
    return 0;
}