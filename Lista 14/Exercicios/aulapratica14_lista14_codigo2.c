#include<stdio.h>
#include<stdlib.h>
typedef struct comapnia{
    char nome[250];
    char atuacao[250];
    double valorAtual;
    double valorAnterior;
}comapnia;
double variancia(double a, double b) {
    int c;
    c= (a*100)/b;
    return c-100;
}
int main(){
    int n;
    printf("Digite o numero de companias: ");
    scanf("%d", &n);
    comapnia *c = (comapnia *)malloc(n * sizeof(comapnia));
    if (c == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    for(int i=0; i<n; i++){
        printf("*** Preenchendo dados da companhia %d ***\n", i+1);
        printf("\n Digite o nome: ");
        scanf(" %[^\n]", c[i].nome);
        printf("\n Digite a atuacao: ");
        scanf(" %[^\n]", c[i].atuacao);
        printf("\n Digite o valor atual: ");
        scanf("%lf", &c[i].valorAtual);
        printf("\n Digite o valor anterior: ");
        scanf("%lf", &c[i].valorAnterior);
        printf("\n *** Dados preenchidos com sucesso! ***\n");
    }
    printf("\n\n*** Dados das companias ***\n");
    for(int i=0; i<n; i++){
        printf("Companhia %d:\n", i+1);
        printf("Nome: %s\n", c[i].nome);
        printf("Atuacao: %s\n", c[i].atuacao);
        printf("Valor Atual: %.2lf\n", c[i].valorAtual);
        printf("Valor Anterior: %.2lf\n", c[i].valorAnterior);
        printf("Variancia: %.2lf%%\n", variancia(c[i].valorAtual, c[i].valorAnterior));
    }
    free(c);
    return 0;
}