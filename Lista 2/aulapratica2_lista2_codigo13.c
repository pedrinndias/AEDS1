#include<stdio.h>
int main (){
    int termo, raz, termofinal;
    printf("Digite o primeiro termo e a razao: ");
    scanf("%d %d", &termo, &raz);
    termofinal = termo + 9*raz;
    printf("O decimo termo e: %d\n", termofinal);
    return 0;
}
