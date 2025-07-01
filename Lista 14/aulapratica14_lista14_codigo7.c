#include<stdio.h>
#include<math.h>
typedef struct ponto2d{
    float x[2];
    float y[2];
}ponto2d;
int main(){
    ponto2d p;
    int aux;
    float distancia;
    do{
        printf("\n *** Menu Interativo *** \n");
        printf("\n 1- Digitar coordenadas do ponto inicial[x,y]");
        printf("\n 2- Digitar coordenadas do ponto final[x,y]");
        printf("\n 3- Calcular distancia entre os pontos");
        printf("\n 4- Sair \n");
        scanf("%d", &aux);
        switch(aux){
            case 1:
                printf("\n Escreva valor de x:");
                scanf("%f", &p.x[0]);
                printf("\n Escreva valor de y:");
                scanf("%f", &p.y[0]);
                break;
            case 2:
                printf("\n Escreva valor de x:");
                scanf("%f", &p.x[1]);
                printf("\n Escreva valor de y:");
                scanf("%f", &p.y[1]);
                break;
            case 3:
                distancia = sqrt(pow((p.x[1] - p.x[0]), 2) + pow((p.y[1] - p.y[0]), 2));
                printf("\n Distancia entre os pontos: %.2f\n", distancia);
                break;
                    
            case 4:
                printf("\n Saindo do programa...\n");
                break;
        }   
    }while (aux != 4);
    return 0;
}