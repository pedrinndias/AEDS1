#include<stdio.h>
int main(){
    int num1, a, b, c, x, num2;
    printf("Digite um numero inteiro com três digitos: ");
    scanf("%d", &num1);
    a = num1/100;
    x=num1%100;
    b = x/10;
    c = x%10;
    num2 = c*100+b*10+a;
    printf("O numero invertido e: %d\n", num2);
    return 0;    
}