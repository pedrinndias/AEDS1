#include <stdio.h>
int main(){
    float salmin, sal, divisao;
    printf("Escreva o salario minimo e o salario de uma pessoa: ");
    scanf("%f %f", &salmin, &sal);
    divisao=sal/salmin;
    printf("Essa pessoa recebe %.2f salarios minimos\n", divisao);
    return 0;
}
