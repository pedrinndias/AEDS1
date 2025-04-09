#include <stdio.h>
int maior(int *num1, int *num2){
    int num_maior;
    maior= (*num1) > (*num2) ? (*num1) : (*num2);
    return num_maior;
    }
int main(){
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    printf("O maior numero eh: %d\n", maior(&num1, &num2));
    return 0;
}