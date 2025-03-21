#include <stdio.h>
#include <math.h>
int main(){
    int n;
   float p, i, rend;
   printf("Escreva o capital, a taxa de juros e o tempo: ");
    scanf("%f %f %d", &p, &i, &n);
    rend = p * ((pow(1+i, n)-1)/i);
    printf("O rendimento e: %.2f\n", rend);
    return 0;
}
