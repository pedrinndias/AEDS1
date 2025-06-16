#include <stdio.h>

typedef struct {
    char nomeCompanhia[50];
    char areaAtuacao[30];
    float valorAtual;
    float valorAnterior;
    double variacaoPorcentagem;
} Acao;

int main() {
    Acao acao1;

    printf("--- Cadastro de Acao da Bolsa ---\n");

    printf("Digite o nome da companhia: ");
    scanf(" %[^\n]", acao1.nomeCompanhia);

    printf("Digite a area de atuacao: ");
    scanf(" %[^\n]", acao1.areaAtuacao);

    printf("Digite o valor da acao na abertura: ");
    scanf("%f", &acao1.valorAnterior);

    printf("Digite o valor atual da acao: ");
    scanf("%f", &acao1.valorAtual);

    if (acao1.valorAnterior != 0) {
        acao1.variacaoPorcentagem = ((acao1.valorAtual - acao1.valorAnterior) / acao1.valorAnterior) * 100.0;
    } else {
        acao1.variacaoPorcentagem = 0;
    }

    printf("\n--- Dados da Acao ---\n");
    printf("Companhia: %s\n", acao1.nomeCompanhia);
    printf("Area de Atuacao: %s\n", acao1.areaAtuacao);
    printf("Valor Anterior: R$ %.2f\n", acao1.valorAnterior);
    printf("Valor Atual: R$ %.2f\n", acao1.valorAtual);
    printf("Variacao: %+.2f%%\n", acao1.variacaoPorcentagem);

    return 0;
}