#include <stdio.h>
int troca(int *num1, int *num2){
    int aux;
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}
int main(){
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    troca(&num1, &num2);
    printf("Os numeros trocados sao: %d e %d\n", num1, num2);
    return 0;
}