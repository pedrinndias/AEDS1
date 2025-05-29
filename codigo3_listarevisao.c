#include<stdio.h>
#include<stdlib.h>
int contCosoante(char *str){
    if(*str=='\0'){
        return 0;
    }else{
        if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' || 
           *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U'){
            return contCosoante(str+1);
        }else{
            return 1 + contCosoante(str+1);
        }
    }
}
int main(){
    char *str;
    str = (char*) malloc(100 * sizeof(char));
    if (str == NULL) {
        printf("Memoria insuficiente\n");
        return 1;
    }
    printf("Digite uma string: ");
    scanf("%[^\n]", str);
    
    int consoantes = contCosoante(str);
    printf("Numero de consoantes: %d\n", consoantes);
    
    free(str);
    return 0;
}