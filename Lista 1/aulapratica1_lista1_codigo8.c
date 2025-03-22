#include <stdio.h>
int main (){
    int termo, razao, dec;
    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &termo);
    printf("Digite a razao da PA: ");
    scanf("%d", &razao);
    dec = termo + 9*razao;
    printf("O decimo termo da PA e: %d\n", dec);
    return 0;
}
