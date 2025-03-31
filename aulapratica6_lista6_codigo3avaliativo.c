#include <stdio.h>
void verificador(int intervalo){
    for(int i = (intervalo - 1); i >= 0; i--){
        if(((intervalo % i)!=0) && ((intervalo % 1)!=0)){
            verificador(i);
            printf("%d ", intervalo);
        }
    }
    return;
}
void primoIntervalo (int menor, int maior){
    for(int i = menor; i <= maior; i++){
        verificador(i);
        printf("\n");

    }
    return;
}
int main(){
    int a, b, maior, menor;
    printf("Escreva dois numeros: ");
    scanf("%d %d", &a, &b);
    maior =a>b?a:b;
    menor =a<b?a:b;
    primoIntervalo(menor, maior);
    return 0;
}