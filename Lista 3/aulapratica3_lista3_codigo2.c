#include <stdio.h>
int main (){
    float num;
    print("Escreva um numero: ");
    scanf("%f", &num);
    if(num==0){
        printf("Numero igual a 0");
    }
    if(num > 0){
        printf("Numero maior que 0");
    } else {
        printf(" numero menor que 0");
    }
    return 0;
}