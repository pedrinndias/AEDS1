#include <stdio.h>

typedef struct {
    char titulo[100];
    char autor[50];
    int anoPublicacao;
} Livro;

int main() {
    Livro meuLivro;

    printf("--- Cadastro de Livro ---\n");

    printf("Digite o titulo do livro: ");
    scanf(" %[^\n]", meuLivro.titulo);

    printf("Digite o nome do autor: ");
    scanf(" %[^\n]", meuLivro.autor);

    printf("Digite o ano de publicacao: ");
    scanf("%d", &meuLivro.anoPublicacao);

    printf("\n--- Informacoes do Livro Cadastrado ---\n");
    printf("Titulo: %s\n", meuLivro.titulo);
    printf("Autor: %s\n", meuLivro.autor);
    printf("Ano de Publicacao: %d\n", meuLivro.anoPublicacao);

    return 0;
}