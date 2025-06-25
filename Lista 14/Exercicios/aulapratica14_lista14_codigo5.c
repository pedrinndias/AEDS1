#include<stdio.h>
#include<stdlib.h>
#define TAM 5
typedef struct Banda{
    char nome[50];
    char estiloMusical[30];
    int numeroIntegrantes;
    int posicaoRanking;
}Banda;
void imprimirDados(Banda *b, int i){
    printf("*** Banda Cadastrada %d ***\n", i+1);
    printf("Nome: %s\n", b[i].nome);
    printf("Estilo Musical: %s\n", b[i].estiloMusical);
    printf("Numero de Integrantes: %d\n", b[i].numeroIntegrantes);
    printf("Posicao no Ranking: %d\n", b[i].posicaoRanking);
}
int main(){
    Banda *banda = (Banda *)malloc(TAM * sizeof(Banda));
    if (banda == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    
    for(int i = 0; i < TAM; i++){
        printf("*** Preenchendo dados da banda %d ***\n", i+1);
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
    for(int i = 0; i < TAM; i++){
        imprimirDados(banda, i);
    }
    
    free(banda);
    return 0;
}