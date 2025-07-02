#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define TAM 8

typedef struct data{
    int dia;
    int mes;
    int ano;
}data;

typedef struct filme{
    char titulo[250];
    int duracao; //em minutos
    data dataEstreia;
}filme;

data preecnherData(){
    data dataEstreia;
    srand(time(NULL));
    dataEstreia.dia= rand()%30 +1;
    dataEstreia.mes= rand()%12 +1;
    dataEstreia.ano= rand()%24 +2000;
    
    return dataEstreia;
}

int main(){
    filme F[TAM];
    printf("***Cadastramento de Filmes:***\n");
    for(int i=0; i<TAM; i++){
        printf("Filme [%d]:\n",i+1);
        printf("Escreva o nome do filme:");
        scanf("%[^\n]", F[i]->titulo);
        printf("\nEscreva a duracao do filme em minutos: ");
        scanf("%d", &F[i].duracao);
        F[i].dataEstreia = preecnherData;
    }

    prinf("\n***Filmes Cadastrados***\n");
    int aux;
    do{
        printf("\n1- Ver filmes cadastrados\n");
        printf("2- Saiir\n");
        scanf("%d", &aux);
        switch(aux){
            case 1:
            float aux1;
            do{
                printf("1.1-Ver todos os filmes\n");
                printf("1.2-Escolha o filme(numero)\n");
                printf("1.3-Sair");
                scanf("%f", &aux1);
                switch(aux1){
                    case 1.1:
                        for(int i=0; i<TAM; i++){
                            printf("\nFilme [%d]:\n",i+1);
                            printf("O nome do filme: %s", F[i].titulo);
                            printf("\nA duracao do filme em minutos: %d", F[i].duracao);
                            printf("\nA data de estreia eh: %02d/%02d/%d\n", F[i].dataEstreia.dia, F[i].dataEstreia.mes, F[i].dataEstreia.ano);
                        }
                        break;
                    case 1.2:
                        int i;
                        printf("Escreva o numero de cadastro do filme: ")
                        scanf("%d",&i);
                        i--;
                        printf("\nFilme [%d]:\n",i+1);
                        printf("O nome do filme: %s", F[i].titulo);
                        printf("\nA duracao do filme em minutos: %d", F[i].duracao);
                        printf("\nA data de estreia eh: %02d/%02d/%d\n", F[i].dataEstreia.dia, F[i].dataEstreia.mes, F[i].dataEstreia.ano);
                        break;
                    case 1.3:
                        return 0
                        break;
                }
            }while(aux1!=1.3)
            break;

            case 2:
            return 0;
            break;
        }

    }While(aux!=2)
    return 0;
}