#include <stdio.h>
#include <math.h>
#include <corecrt_math_defines.h>
int main(){
    int raio;
    float area, perimetro;
    printf("Digite o raio de um circulo: ");
    scanf("%d", &raio);
    area = M_PI*pow(raio,2);
    perimetro = 2*M_PI*raio;
    printf("A area do circulo e: %f\n", area);
    printf("O perimetro do circulo e: %f\n", perimetro);
    return 0;
   
}