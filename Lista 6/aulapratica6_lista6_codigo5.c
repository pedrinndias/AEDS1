#include <stdio.h>
void fatorial(int n, int*resultado){
    for(int i=1; i<=n; i++){
        *resultado*=i;
    }
    return;
}
int main(){
    int n, resultado=1;
    printf("Escreva um numero: ");
    scanf("%d", &n);
    fatorial(n, &resultado);
    printf("O fatorial de %d eh: %d\n", n, resultado);
    return 0;
}