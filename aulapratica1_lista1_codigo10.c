#include <stdio.h>
int main (){
    float a, b, c;
    printf(" Escreva dois numeros reais referentes a A e B: ");
    scanf("%f %f", &a, &b);
    c=a;
    a=b;
    b=c;
    printf("A agora vale: %f", a);
    printf("B agora vale: %f", b);
    return 0;
}