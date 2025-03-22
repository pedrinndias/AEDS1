#include<stdio.h>
int main(){
    float aluguel, x, multas, y, dvd, dvdfinal, faturamento, z;
    printf("Escreva a quantidade de dvd's e o valor do aluguel: ");
    scanf("%f %f", &dvd, &aluguel);
    faturamento=dvd*4*aluguel;
    printf("O faturamento e: %.2f\n", faturamento);
    x=dvd/3;
    y=x/10;
    z=((aluguel*10)/100)+aluguel;
    multas=y*z*12;
    printf("O valor das multas e: %.2f\n", multas);
    dvdfinal=dvd- ((dvd*2)/100);
    printf("O numero de dvd's restantes e: %.2f\n", dvdfinal);
    return 0;
}
//codigo com erro no script, precisa-se corrigir!
