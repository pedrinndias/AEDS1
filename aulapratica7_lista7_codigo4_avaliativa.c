#include <stdio.h>
void cont_par(int n, *pares){
    if(n%2==0 && n!=0){
        (*pares)++;
    }
    return;
}
int main(){
    int n, pares=0;
    do{ 
        printf("Digite um numero inteiro positivo (0 para sair): ");
        scanf("%d", &n);
        cont_par(n, &pares);
    } while (n!=0);
    printf("%d numeros pares", pares );
    return 0;
}