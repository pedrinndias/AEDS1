#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} ponto2d;

int main() {
    ponto2d ponto_inicial;
    ponto2d ponto_final;
    int opcao;

    do {
        printf("\n--- Calculo de Distancia entre Pontos ---\n");
        printf("1. Digitar os valores do ponto inicial\n");
        printf("2. Digitar os valores do ponto final\n");
        printf("3. Calcular e exibir a distancia entre os dois pontos\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nDigite as coordenadas do PONTO INICIAL:\n");
                printf("Coordenada x: ");
                scanf("%f", &ponto_inicial.x);
                printf("Coordenada y: ");
                scanf("%f", &ponto_inicial.y);
                break;

            case 2:
                printf("\nDigite as coordenadas do PONTO FINAL:\n");
                printf("Coordenada x: ");
                scanf("%f", &ponto_final.x);
                printf("Coordenada y: ");
                scanf("%f", &ponto_final.y);
                break;

            case 3: {
                float distancia = sqrt(pow(ponto_final.x - ponto_inicial.x, 2) + pow(ponto_final.y - ponto_inicial.y, 2));
                printf("\n>>> A distancia entre os pontos eh: %.2f\n", distancia);
                break;
            }

            case 4:
                printf("\nSaindo do programa.\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 4);

    return 0;
}