#include <stdio.h>
int soma(int n){
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
    printf("A soma eh: %d\n", soma(num));
    return 0;
}