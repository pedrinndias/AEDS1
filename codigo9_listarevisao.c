#include <stdio.h>
#include <stdlib.h>
int contCaractere(char *str, char caractere){
    if(*str=='\0'){
    return 0;
    } else if(*str==caractere){
        return 1 + contCaractere(str+1, caractere);
    } else {
        return contCaractere(str+1, caractere);
    }
}
int main(){
    char *str = "programacao";
    char caractere = 'a';
    int resultado = contCaractere(str, caractere);
    printf("O caractere '%c' aparece %d vezes na string \"%s\".\n", caractere, resultado, str);
    return 0;
}