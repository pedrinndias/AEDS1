#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int contaVogal(char *string){
    int cont=0;

    if(*string == '\0'){
        return 0;
    }
    if(*string == 'A' || *string == 'E' || *string == 'I' || *string == 'O' || *string == 'U' || *string == 'a' || *string == 'e' || *string == 'i' || *string == 'o' || *string == 'u'){
        cont++;
    }
    return cont + contaVogal(string + 1);
}
int main(void){
char string[101];
printf("Digite uma palavra ou texto: ");
scanf("%[^\n]", string);
int resultado = contaVogal(string);
if(resultado == 1){
printf("Existe apenas uma vogal!");
}
else if(resultado == 0){
    printf("Nao existe vogal!");
}
else{
    printf("Existem %d vogais", resultado);
}
return 0;
}