#include <stdio.h>

#define TOTAL_BANDAS 5

typedef struct {
    char nome[50];
    char estiloMusical[30];
    int numeroIntegrantes;
    int posicaoRanking;
} Banda;

int main() {
    Banda bandas[TOTAL_BANDAS];
    int i;

    printf("--- Cadastro de Bandas ---\n");
    for (i = 0; i < TOTAL_BANDAS; i++) {
        printf("\n--- Banda %d ---\n", i + 1);

        printf("Nome da banda: ");
        scanf(" %[^\n]", bandas[i].nome);

        printf("Estilo musical: ");
        scanf(" %[^\n]", bandas[i].estiloMusical);

        printf("Numero de integrantes: ");
        scanf("%d", &bandas[i].numeroIntegrantes);

        printf("Posicao no ranking: ");
        scanf("%d", &bandas[i].posicaoRanking);
    }

    printf("\n\n===== Lista de Bandas Cadastradas =====\n");
    for (i = 0; i < TOTAL_BANDAS; i++) {
        printf("\n--- Banda %d ---\n", i + 1);
        printf("Nome: %s\n", bandas[i].nome);
        printf("Estilo Musical: %s\n", bandas[i].estiloMusical);
        printf("Integrantes: %d\n", bandas[i].numeroIntegrantes);
        printf("Ranking: %d\n", bandas[i].posicaoRanking);
    }

    return 0;
}