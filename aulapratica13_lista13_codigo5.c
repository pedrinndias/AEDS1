#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *arquivo;
    char nome_arquivo[] = "notas.txt";
    char nome_aluno[100];
    float nota_aluno;
    arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo notas.txt");
        return EXIT_FAILURE;
    }
    printf("Lendo dados do arquivo %s:\n", nome_arquivo);
    while (fscanf(arquivo, "%99s %f", nome_aluno, &nota_aluno) == 2) {
        printf("Nome: %s, Nota: %.1f\n", nome_aluno, nota_aluno);
    }
    if (ferror(arquivo)) {
        perror("Erro durante a leitura do arquivo");
    }
    if (fclose(arquivo) == EOF) {
        perror("Erro ao fechar o arquivo notas.txt");
        return EXIT_FAILURE;
    }
    printf("\nLeitura do arquivo concluida.\n");
    return 0;
}