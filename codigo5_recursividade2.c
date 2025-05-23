#include<stdio.h>
int contDig(int n, int *cont){
    if (n == 0){
        return *cont;
    } else {
        (*cont)++;
        return contDig(n / 10, cont);
    }
}
int main(){
    int n, cont=0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    contDig(n, &cont);
    printf("A quantidade de digitos e: %d\n", cont);
    return 0;
}