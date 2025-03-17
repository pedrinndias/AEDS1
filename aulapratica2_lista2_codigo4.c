#include<stdio.h>
int main(){
    int idade, altura;
    char nome[50];
    printf("Escreva sua idade: ");
    scanf("%d", &idade);
    printf("Escreva sua altura: ");
    scanf("%d", &altura);
    printf("Escreva seu nome: ");
    scanf(nome, 50, stdin);
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %d\n", altura);
    return 0;
}