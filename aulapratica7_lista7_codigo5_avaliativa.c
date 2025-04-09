#include <stdio.h>
int maior(int *num1, *num2){
    int maior;
    maior= (*num1) > (*num2) ? (*num1) : (*num2);
    return maior;
}
int main(){
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    printf("O maior numero eh: %d\n", maior(&num1, &num2));
    return 0;
}