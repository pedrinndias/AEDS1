#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_PESSOAS 10

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[100];
    float altura;
    Data dataNascimento;
} Pessoa;

Data gerarDataAleatoria() {
    Data dataGerada;
    dataGerada.dia = (rand() % 30) + 1;
    dataGerada.mes = (rand() % 12) + 1;
    dataGerada.ano = (rand() % 25) + 2000;
    return dataGerada;
}

int main() {
    srand(time(NULL));

    Pessoa pessoas[TOTAL_PESSOAS];
    int i;

    for (i = 0; i < TOTAL_PESSOAS; i++) {
        printf("\n--- Cadastro da Pessoa %d ---\n", i + 1);

        printf("Digite o nome: ");
        scanf(" %[^\n]", pessoas[i].nome);

        printf("Digite a altura (ex: 1.75): ");
        scanf("%f", &pessoas[i].altura);

        pessoas[i].dataNascimento = gerarDataAleatoria();

        printf("Data de nascimento gerada: %02d/%02d/%d\n",
               pessoas[i].dataNascimento.dia,
               pessoas[i].dataNascimento.mes,
               pessoas[i].dataNascimento.ano);
    }

    printf("\n\n===== Lista de Pessoas Cadastradas =====\n");
    for (i = 0; i < TOTAL_PESSOAS; i++) {
        printf("\n--- Pessoa %d ---\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Altura: %.2f\n", pessoas[i].altura);
        printf("Data de Nascimento: %02d/%02d/%d\n",
               pessoas[i].dataNascimento.dia,
               pessoas[i].dataNascimento.mes,
               pessoas[i].dataNascimento.ano);
    }

    return 0;
}