#include<stdio.h>
#include<string.h>
#define TAM_MAX
int main(){
    int tam;
    char frase[TAM_MAX];
printf("Digite uma frase: ");
scanf("%[^zn]", frase);
tam = strlen(frase); //contar numereo de caracteres tem na string
// ex: "Olá, Mundo\0"
//      12345678910 - 11
// tam = 10 caracteres
// espaço na memoria = 11 espaços
for(int i = tam-1; i>0; tam--){
printd("%c", frase[i]);
}
return 0;
}