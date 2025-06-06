#include<stdio.h>
int soma(int n){
    if(n == 1){
        return 1;
    } else {
        return n + soma(n - 1);
    }
}
int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Soma de 1 a %d = %d\n", n, soma(n));
    return 0;
}