#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 5
#define TOP_RANKING 3
typedef struct Banda {
    char nome[50];
    char estiloMusical[30];
    int numeroIntegrantes;
    int posicaoRanking;
} Banda;
void imprimirDados(Banda *b, int i) {
    printf("*** Banda Cadastrada %d ***\n", i + 1);
    printf("Nome: %s\n", b[i].nome);
    printf("Estilo Musical: %s\n", b[i].estiloMusical);
    printf("Numero de Integrantes: %d\n", b[i].numeroIntegrantes);
    printf("Posicao no Ranking: %d\n", b[i].posicaoRanking);
}
int main() {
    Banda *banda = (Banda *)malloc(TAM * sizeof(Banda));
    if (banda == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    for (int i = 0; i < TAM; i++) {
        printf("*** Preenchendo dados da banda %d ***\n", i + 1);
        printf("Digite o nome: ");
        scanf(" %[^\n]", banda[i].nome);
        printf("Digite o estilo musical: ");
        scanf(" %[^\n]", banda[i].estiloMusical);
        printf("Digite o numero de integrantes: ");
        scanf("%d", &banda[i].numeroIntegrantes);
        printf("Digite a posicao no ranking: ");
        scanf("%d", &banda[i].posicaoRanking);
        printf("\n*** Dados preenchidos com sucesso! ***\n");
    }
    printf("\n\n*** Dados das bandas ***\n");
    for (int i = 0; i < TAM; i++) {
        imprimirDados(banda, i);
    }
    printf("*** Pergunta sobre as bandas cadastradas ***\n");
    char resposta;
    printf("Quer saber se sua banda favorita foi cadastrada? (s/n): ");
    scanf(" %c", &resposta);
    if (resposta == 'n' || resposta == 'N') {
        printf("Obrigado por participar!\n");
        free(banda);
        banda = NULL;
        return 0;
    } else if (resposta == 's' || resposta == 'S') {
        char **bandasPorRanking = (char **)malloc(TAM * sizeof(char *));
        if (bandasPorRanking == NULL) {
            printf("Erro ao alocar memoria para bandas por ranking.\n");
            free(banda);
            banda = NULL;
            return 1;
        }
        for (int i = 0; i < TAM; i++) {
            bandasPorRanking[i] = (char *)malloc(50 * sizeof(char));
            if (bandasPorRanking[i] == NULL) {
                printf("Erro ao alocar memoria para o nome da banda.\n");
                for (int k = 0; k < i; k++) {
                    free(bandasPorRanking[k]);
                }
                free(bandasPorRanking);
                free(banda);
                banda = NULL;
                return 1;
            }
            bandasPorRanking[i][0] = '\0';
        }
        for (int i = 0; i < TAM; i++) {
            if (banda[i].posicaoRanking >= 1 && banda[i].posicaoRanking <= TAM) {
                strcpy(bandasPorRanking[banda[i].posicaoRanking - 1], banda[i].nome);
            }
        }
        char nomeBandaFavorita[50];
        printf("Digite o nome da banda que voce quer verificar: ");
        scanf(" %[^\n]", nomeBandaFavorita);

        int encontrada = 0;
        for (int i = 0; i < TOP_RANKING; i++) {
            if (strcmp(nomeBandaFavorita, bandasPorRanking[i]) == 0) {
                encontrada = 1;
                break;
            }
        }

        if (encontrada) {
            printf("Sua banda favorita foi cadastrada e esta entre as %d primeiras posicoes!\n", TOP_RANKING);
        } else {
            printf("Sua banda favorita nao foi cadastrada ou nao esta entre as %d primeiras posicoes.\n", TOP_RANKING);
        }

        for (int i = 0; i < TAM; i++) {
            free(bandasPorRanking[i]);
            bandasPorRanking[i] = NULL;
        }
        free(bandasPorRanking);
        bandasPorRanking = NULL;
    }
    free(banda);
    banda = NULL;
    return 0;
}