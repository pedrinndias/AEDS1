#include<stdio.h>
int contagemRecursiva(int n){
    if(n == 0){
        return 0;
    } else {
        printf("%d ", n);
        return contagemRecursiva(n - 1);
    }
}
int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Contagem regressiva de %d: ", n);
    contagemRecursiva(n);
    printf("\n");
    return 0;
}