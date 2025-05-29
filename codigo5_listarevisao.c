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
    char *strInv = (char *)malloc(cont * sizeof(char)); 
    if(strInv == NULL){
        printf("Memoria insuficiente!\n");
        free(str);
        return 1;
    }
    strInv[cont] = '\0';
    for(int i = 0; i < cont; i++){
        strInv[i] = str[cont];
        cont--;
    }
    printf("String invertida: %s\n", strInv);
    free(str);
    free(strInv);
    return 0;
}