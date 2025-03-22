#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,y;
    printf("Digite o valor de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    y=(a+b/(c+a)+pow((a-b),2))+log10(64);
    printf("O valor de y e: %f\n", y);
    return 0;  

}
