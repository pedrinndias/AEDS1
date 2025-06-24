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
    printf("*** Pergunta sobre as bandas cadastradas ***\n");
    char resposta;
    printf("Quer saber se sua banda favorita foi cadastrada? (s/n): ");
    scanf(" %c", &resposta);
    if (resposta == 'n' || resposta == 'N') {
        printf("Obrigado por participar!\n");
        free(banda);
        return 0;
    } else if (resposta == 's' || resposta == 'S') {
        int *ordem=(char *)malloc(TAM * sizeof(char));
        if (ordem == NULL) {
            printf("Erro ao alocar memoria para a ordem.\n");
            free(banda);
            return 1;
        }
        for(int i=0; i<TAM; i++){
            for (int j=1; j<=TAM; j++){
                if(banda[i].posicaoRanking == j){
                    ordem[j-1] = banda[i].nome;
                }
            }
        }
        char aux[50];
        printf("Digite o nome da banda que voce quer verificar: ");
        scanf(" %[^\n]", aux);
        if (aux == ordem[0] || aux == ordem[1] || aux == ordem[2] || aux == ordem[3]) {
            printf("Sua banda favorita foi cadastrada!\n");
        } else {
            printf("Sua banda favorita nao foi cadastrada.\n");
        }
        free(ordem);
    }
    free(banda);
    return 0;
}
