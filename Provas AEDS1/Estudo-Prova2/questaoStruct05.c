//Crie uma struct chamada Pessoa com os campos nome (string
//de até 50 caracteres) e idade (inteiro). Crie uma função chamada imprimirPessoa que
//receba uma pessoa como parâmetro e imprima seus dados. No programa principal, leia
//os dados de uma pessoa, armazene na struct e chame a função para imprimir.
//Solução sugerida:


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct pessoa{
    char nome[50];
    int idade;
}pessoa;

void imprimirpessoa(struct pessoa *p, int i){
    printf("\n***Cadastro pessoa P%d***\n", i);
    printf("Nome:%s\n", p->nome);
    printf("Idade:%d\n", p->idade);
}

int main(){
    int tam;
    printf("Quantas pessoas voce quer cadastrar? ");
    scanf("%d",&tam);
    pessoa *p=(pessoa*)malloc(tam*sizeof(pessoa));
    if(p==NULL){
        printf("Falha ao alocar memoria");
        return 1;
    }
    printf("***Cadastrar pessoas:***\n");
    for(int i=0; i<tam; i++){
        printf("Pessoa %d:", i);
        printf("\nNome:");
        scanf("%[^\n]", &p[i].nome);
        printf("\nIdade:");
        scanf("%d", &p[i].idade);
    }
    printf("***Cadastramento concluido***\n");
    printf("\n");
    for(int i=0; i<tam; i++){
        imprimirpessoa(p,i);
    }
    free(p);
    return 0;
}