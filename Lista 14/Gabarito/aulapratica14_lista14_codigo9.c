#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[50];
    int idade;
    char sexo;
    char cpf[15];
    Data dataNascimento;
    int codigoSetor;
    char cargo[30];
    float salario;
} Funcionario;

int main() {
    Funcionario func;

    printf("--- Cadastro de Funcionario ---\n");

    printf("Nome: ");
    scanf(" %[^\n]", func.nome);

    printf("Idade: ");
    scanf("%d", &func.idade);

    printf("Sexo (M/F): ");
    scanf(" %c", &func.sexo);

    printf("CPF (xxx.xxx.xxx-xx): ");
    scanf(" %[^\n]", func.cpf);

    printf("Data de Nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &func.dataNascimento.dia, &func.dataNascimento.mes, &func.dataNascimento.ano);

    printf("Codigo do Setor (0-99): ");
    scanf("%d", &func.codigoSetor);

    printf("Cargo: ");
    scanf(" %[^\n]", func.cargo);

    printf("Salario: R$ ");
    scanf("%f", &func.salario);

    printf("\n\n--- Dados do Funcionario Cadastrado ---\n");
    printf("Nome: %s\n", func.nome);
    printf("Idade: %d anos\n", func.idade);
    printf("Sexo: %c\n", func.sexo);
    printf("CPF: %s\n", func.cpf);
    printf("Data de Nascimento: %02d/%02d/%d\n", func.dataNascimento.dia, func.dataNascimento.mes, func.dataNascimento.ano);
    printf("Setor: %d\n", func.codigoSetor);
    printf("Cargo: %s\n", func.cargo);
    printf("Salario: R$ %.2f\n", func.salario);

    return 0;
}