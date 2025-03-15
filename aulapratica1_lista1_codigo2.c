#include <stdio.h>
int main(){
    float sm, vasp, consta, desc;
    int qgdk;
    printf("Digite o salario minimo: ");
    scanf("%f", &sm);
    printf("Escreva a quantidade de kilowatts gasta em uma residencia:");
    scanf("%d", &qgdk);
    consta = sm/700;
    vasp=consta*qgdk;
    desc= vasp/10;
    vasp=vasp-desc;
    printf("O valor a ser pago e: %f\n", vasp);
    printf("O valor a ser pago por killowat e: %f", consta);
return 0;
}