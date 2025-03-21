#include <stdio.h>
#include <math.h>
int main() {
    int lado, area, perimetro;
    float diagonal;
    printf("Digite o lado de um quadrado: ");
    scanf("%d", &lado);
    perimetro = 4*lado;
    area = pow(lado,2);
    diagonal = sqrt(2)*lado;
    printf("O perimetro do quadrado e: %d\n", perimetro);
    printf("A area do quadrado e: %d\n", area);
    printf("A diagonal do quadrado e: %f\n", diagonal);
    return 0;
}
