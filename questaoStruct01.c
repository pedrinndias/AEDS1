#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define TAM 2

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

struct data preecnherData(){
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
        fflush(stdin);
        printf("Filme [%d]:\n",i+1);
        printf("Escreva o nome do filme: ");
        scanf("%[^\n]", F[i].titulo);
        printf("\nEscreva a duracao do filme em minutos: ");
        scanf("%d", &F[i].duracao);
        F[i].dataEstreia = preecnherData();
    }

    printf("\n***Filmes Cadastrados***\n");
    int aux;
    int aux1;
    int j;
    do{
        fflush(stdin);
        printf("\n1- Ver filmes cadastrados\n");
        printf("2- Saiir\n");
        scanf("%d", &aux);
        switch(aux){
            case 1:

                do{
                    printf("1-Ver todos os filmes\n");
                    printf("2-Escolha o filme(numero)\n");
                    printf("3-Sair");
                    scanf("%d", &aux1);
                    switch(aux1){
                        case 1:
                            for(int i=0; i<TAM; i++){
                                printf("\nFilme [%d]:\n",i+1);
                                printf("O nome do filme: %s", F[i].titulo);
                                printf("\nA duracao do filme em minutos: %d", F[i].duracao);
                                printf("\nA data de estreia eh: %02d/%02d/%d\n", F[i].dataEstreia.dia, F[i].dataEstreia.mes, F[i].dataEstreia.ano);
                            }
                            break;
                        case 2:
                            printf("Escreva o numero de cadastro do filme: ");
                            scanf("%d",&j);
                            j--;
                            printf("\nFilme [%d]:\n",j+1);
                            printf("O nome do filme: %s", F[j].titulo);
                            printf("\nA duracao do filme em minutos: %d", F[j].duracao);
                            printf("\nA data de estreia eh: %02d/%02d/%d\n", F[j].dataEstreia.dia, F[j].dataEstreia.mes, F[j].dataEstreia.ano);
                            break;
                        case 3:
                            return 0;
                            break;
                    }
                }while(aux1!=3);
                
                break;


            case 2:
                return 0;
                
                break;
        }

    }while(aux!=2);
    return 0;
}