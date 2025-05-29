#include<stdio.h>
#include<stdlib.h>
#define TAM 100
int contTamanho(char *str){
    if(*str=='\0'){
        return 0;
    } else{
        return 1 + contTamanho(str+1);
    }
}
int main(){
    char *str;
    str = (char *)malloc(TAM * sizeof(char));
    if(str == NULL){
        printf("Memoria insuficiente!\n");
        return 1;
    }
    printf("Digite uma string: ");
    scanf("%[^\n]", str);
    int cont = contTamanho(str);
    char *strInv = (char *)malloc((cont+1) * sizeof(char));//(cont+1) é para incluir o caractere nulo no final da string invertida
    if(strInv == NULL){
        printf("Memoria insuficiente!\n");
        free(str);
        return 1;
    }
for (int i = 0; i < cont; i++) { // Loop para inverter a string
        strInv[i] = str[cont - 1 - i];//(cont - 1) é o último índice da string original //(- i) é para inverter a ordem dos caracteres
    }
    strInv[cont] = '\0';// Adiciona o caractere nulo ao final da string invertida
    printf("String original: %s\n", str);// Exibe a string original
    printf("String invertida: %s\n", strInv);// Exibe a string invertida
    free(str);
    free(strInv);
    return 0;
}