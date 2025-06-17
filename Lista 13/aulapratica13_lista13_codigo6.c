#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *arquivo;
    char nome_arquivo_binario[] = "vetor.bin";
    int numeros_escrita[5] = {10, 20, 30, 40, 50};
    int numeros_leitura[5];
    int i;
    arquivo = fopen(nome_arquivo_binario, "wb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo para escrita");
        return EXIT_FAILURE;
    }
    printf("Escrevendo vetor no arquivo binario...\n");
    size_t elementos_escritos = fwrite(numeros_escrita, sizeof(int), 5, arquivo);
    if (elementos_escritos != 5) {
        perror("Erro ao escrever os dados no arquivo");
        fclose(arquivo);
        return EXIT_FAILURE;
    }
    printf("Vetor escrito com sucesso.\n");
    if (fclose(arquivo) == EOF) {
        perror("Erro ao fechar o arquivo apos a escrita");
        return EXIT_FAILURE;
    }
    arquivo = fopen(nome_arquivo_binario, "rb");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo para leitura");
        return EXIT_FAILURE;
    }
    printf("\nLendo vetor do arquivo binario...\n");
    size_t elementos_lidos = fread(numeros_leitura, sizeof(int), 5, arquivo);
    if (elementos_lidos != 5) {
        if (feof(arquivo)) {
            printf("Erro: Fim de arquivo prematuro. Foram lidos apenas %zu elementos.\n", elementos_lidos);
        } else if (ferror(arquivo)) {
            perror("Erro ao ler os dados do arquivo");
        }
        fclose(arquivo);
        return EXIT_FAILURE;
    }
    printf("Valores lidos do arquivo:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros_leitura[i]);
    }
    printf("\n");
    if (fclose(arquivo) == EOF) {
        perror("Erro ao fechar o arquivo apos a leitura");
        return EXIT_FAILURE;
    }
    return 0;
}