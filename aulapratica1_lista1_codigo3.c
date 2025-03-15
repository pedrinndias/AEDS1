#include <stdio.h> 
#include <math.h>
int main(){
    int base, altura, area, perimetro;
    float diagonal;
    printf("Digite a base e a altura de um retangulo: ");
    scanf("%d %d", &base, &altura);
    perimetro = 2*(base+altura);
    area = base*altura;
    diagonal = sqrt(pow(base,2)+pow(altura,2));
    printf("O perimetro do retangulo e: %d\n", perimetro);
    printf("A area do retangulo e: %d\n", area);
    printf("A diagonal do retangulo e: %f\n", diagonal);
    return 0;
}