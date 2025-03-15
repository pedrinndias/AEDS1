#include <stdio.h>
#include <math.h>
int main(){
   float p, i, n, rend;
   printf("Escreva o capital, a taxa de juros e o tempo: ");
    scanf("%f %f %f", &p, &i, &n);
    rend=(p*pow(1+i, n-1/i));
    printf("O rendimento e: %.2f\n", rend);
    return 0;
}