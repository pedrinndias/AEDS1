#include <stdio.h>
int main() {
    char nome_arquivo[256];
    printf("Digite o nome do arquivo a ser removido: ");
    if (scanf("%255s", nome_arquivo) != 1) {
        fprintf(stderr, "Erro ao ler o nome do arquivo.\n");
        return 1;
    }
    if (remove(nome_arquivo) == 0) {
        printf("Arquivo '%s' removido com sucesso.\n", nome_arquivo);
    } else {
        fprintf(stderr, "Erro ao remover o arquivo '%s'", nome_arquivo);
        perror("");
        return 1;
    }
    return 0;
}