#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 10
typedef struct datanascimento {
    int dia;
    int mes;
    int ano;
} data;
typedef struct pessoa{
    char nome[250];
    float altura;
    data nascimento;
}pessoa;
data preencherData(int i) {
    srand(time(NULL)); // Seed the random number generator
    data d;
    d.dia = rand() % 30 + 1; // Random day between 1 and 31
    d.mes = rand() % 12 + 1; // Random month between 1 and 12
    d.ano = rand() % 7 + 2000; // Random year between 2000 and 2006
    return d;
}
int main(){
    pessoa p[TAM];
    for(int i=0; i<TAM; i++){
        printf("*** Preenchendo dados da pessoa %d ***\n", i+1);
        printf("Digite o nome: ");
        gets (p[i].nome);
        printf("Digite a altura: ");
        scanf("%f", &p[i].altura);
        p[i].nascimento = preencherData(i);
        printf("*** Dados preenchidos com sucesso! ***\n");
    }
    printf("\n\n*** Dados das pessoas ***\n");
    for(int i=0; i<TAM; i++){
        printf("Pessoa %d:\n", i+1);
        printf("Nome: %s\n", p[i].nome);
        printf("Altura: %.2f\n", p[i].altura);
        printf("Data de Nascimento: %02d/%02d/%04d\n", p[i].nascimento.dia, p[i].nascimento.mes, p[i].nascimento.ano);
    }
    return 0;
}