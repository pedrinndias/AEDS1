#include<stdio.h>
int main(){
    printf("Escreva um texto:\n");
    char texto[100];
    scanf("%[^\n]", texto);
    FILE *fp;
    fp =fopen("aulapratica12_lista12_codigo1.txt", "w");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }
    fprintf(fp, "%s", texto);
    if(fclose(fp) != 0){
        printf("Erro ao fechar o arquivo.\n");
        return 1;
    }
    printf("Texto escrito com sucesso no arquivo.\n");
    fp = fopen("aulapratica12_lista12_codigo1.txt", "r");
    if(fp == NULL){
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }
    printf("Conteudo do arquivo:\n");
    char linha[100];
    while(fgets(linha, sizeof(linha), fp) != NULL){
        printf("%s", linha);
    }
    if(fclose(fp) != 0){
        printf("Erro ao fechar o arquivo.\n");
        return 1;
    }
    fclose(fp);
    printf("Arquivo fechado com sucesso.\n");
    return 0; 
}