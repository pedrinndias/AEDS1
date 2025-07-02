#include <stdio.h>
#include <string.h>
int busca(char *string, char *letra){
    int cont =0;
    if(*string == '\0'){
        return 0;
    }
    if(*string == *letra){
        cont++;
    }
    return cont + busca(string+1, letra);
}
int main(){
char string[201];
char letra;
printf("Digite um texto ou palavra: ");
scanf("%[^\n]", string);
printf("Digite a letra a ser buscada: ");
scanf(" %c", &letra);
int resultado = busca(string, &letra);
printf("A letra %c aparece %d vezes.",letra, resultado);
return 0;
}