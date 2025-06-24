#include<stdio.h>
#include<stdlib.h>
typedef struct data{
    int dia;
    int mes;
    int ano;
}data;
typedef struct livro{
    char titulo[100];
    char autor[50];
    data publicacao;
}livro;
void imprimir(livro *L, int i){
    printf("***Lirvo Cadastrado %d***\n", i+1);
    printf("Titulo: %s\n", L[i].titulo);
    printf("Autor: %s\n", L[i].autor);
    printf("Data de Publicacao: %d/%d/%d\n", (L[i].publicacao).dia, (L[i].publicacao).mes, (L[i].publicacao).ano);
}
int main(){
    int n;
    printf("Digite o numero de livros: ");
    scanf("%d", &n);
    livro *L = (livro *)malloc(n * sizeof(livro));
    if (L == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }
    for(int i=0; i<n; i++){
        printf("*** Preenchendo dados do livro %d ***\n", i+1);
        printf("\n Digite o titulo: ");
        scanf(" %[^\n]", L[i].titulo);
        printf("\n Digite o autor: ");
        scanf(" %[^\n]", L[i].autor);
        printf("\n Digite a data de publicacao(dd/mm/aaaa): ");
        scanf("%d/%d/%d", &L[i].publicacao.dia, &L[i].publicacao.mes, &L[i].publicacao.ano);
        printf("\n *** Dados preenchidos com sucesso! ***\n");
    }
    printf("\n\n*** Dados dos livros ***\n");
    for(int i=0; i<n; i++){
        imprimir(L, i);
    }
    free(L);
    return 0;
}
