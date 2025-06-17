#include <stdio.h>
#include <stdlib.h>
int main() {
    char nome_arquivo_entrada[] = "entrada_redirecionada.txt";
    char nome_arquivo_saida[] = "saida_redirecionada.txt";
    int numero;
    int soma = 0;
    int contador = 0;
    if (freopen(nome_arquivo_entrada, "r", stdin) == NULL) {
        perror("Erro ao redirecionar stdin");
        fprintf(stderr, "Certifique-se de que o arquivo '%s' existe no mesmo diretorio.\n", nome_arquivo_entrada);
        return EXIT_FAILURE;
    }
    if (freopen(nome_arquivo_saida, "w", stdout) == NULL) {
        perror("Erro ao redirecionar stdout");
        return EXIT_FAILURE;
    }
    printf("Processando dados de '%s' para '%s':\n", nome_arquivo_entrada, nome_arquivo_saida);
    printf("Numeros lidos:\n");
    while (scanf("%d", &numero) == 1) {
        printf("- %d\n", numero);
        soma += numero;
        contador++;
    }
    if (contador > 0) {
        printf("Soma dos %d numeros lidos: %d\n", contador, soma);
        printf("Media dos numeros lidos: %.2f\n", (float)soma / contador);
    } else {
        printf("Nenhum numero foi lido do arquivo de entrada.\n");
    }
    printf("Processamento concluido.\n");
    return 0;
}