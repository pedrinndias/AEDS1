#include <stdio.h>
int main(){
    int num, cont=0;
    do{
        printf("Escreva um numero, encerra quando digitado (-1):\n");
        scanf("%d", &num);
        if (num%4==0 && num%6==0){
            cont++;
        }
    } while(num!=-1);
    printf("A quantidade de numeros divisiveis por 4 e multiplos de 6 eh: %d\n", cont);
    return 0;
}