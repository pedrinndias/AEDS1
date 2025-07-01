#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 2

typedef struct data{
    int dia;
    int mes;
    int ano;
}data;

typedef struct livros{
    char nome[50];
    char autor[50];
    data datalancamento;
}livros;

data preencheraleatorio( ){
    data i;
    srand(time(NULL));
    i.dia = rand()% 30 +1;
    i.mes = rand()% 12 +1;
    i.ano = rand()% 75 +1950;
    return i;
}

void imprimir (livros *l, int i){
    printf("\nLivro [%d]: %s", i+1, (l+i)->nome);
    printf("\nAutor: %s", (l+i)->autor);
    printf("\n Data de lancamento: %02d/%02d/%04d", (l+i)->datalancamento.dia , (l+i)->datalancamento.mes , (l+i)->datalancamento.ano);
}

int main(){
    livros *l=(livros*)malloc(TAM*sizeof(livros));
    if (l == NULL){
        printf("Falha ao alocar memoria");
        return 1;
    }
    printf("*** Cadastrar Livros:*** \n");
    for (int i=0; i<TAM; i++){
        printf("\n Escreva o nome do livro[%d]: ", i+1);
        scanf("%[^\n]", l[i].nome);
        fflush(stdin);
        printf("\n Escreva o nome do autor: ");
        scanf("%[^\n]", l[i].autor);
        fflush(stdin);
        l[i].datalancamento = preencheraleatorio();
    }
    printf("*** Livros cadastrados com Sucesso:*** \n");
    for (int i=0; i<TAM; i++){
        imprimir(l,i);
    }
    free(l);
    return 0;
}