#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

void imprimirPessoa(Pessoa p) {
    printf("\n--- Dados da Pessoa ---\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
}

int main() {
    Pessoa p;

    printf("Digite o nome: ");
    scanf(" %[^\n]", p.nome);

    printf("Digite a idade: ");
    scanf("%d", &p.idade);

    imprimirPessoa(p);

    return 0;
}