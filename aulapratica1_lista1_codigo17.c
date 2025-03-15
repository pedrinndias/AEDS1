#include<stdio.h>
int main(){
    int conta, a, b, c, x, inv, soma, d, e, f, y, mult, verificador, g, h, i, w;
    printf("Escreva o numero da conta com apenas 3 digitos: ");
    scanf("%d", &conta);
    a= conta/100;
    x=conta%100;
    b=x/10;
    c=x%10;
    inv=c*100+b*10+a;
    soma=conta+inv;
    d=soma/100;
    y= soma%100;
    e=y/10;
    f=y%10;
    mult=(d*1)+(e*2)+(f*3);
    g=mult/100;
    w=mult%100;
    h=w/10;
    i=w%10;
    printf("O digito verificador e: %d\n", i);
    return 0;
}