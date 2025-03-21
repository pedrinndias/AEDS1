#include<stdio.h>
int main(){
    float a, b, aux;
    printf("Digite dois numeros para as variaveis A e B: ");
    scanf("%f %f", &a, &b);
    aux = a;
    a = b;
    b = aux;
    printf("Os numeros trocados sao A: %.2f e  B: %.2f\n", a, b);
    return 0;
}
