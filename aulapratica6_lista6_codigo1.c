#include<stdio.h>
    void troca (int*a , int*b){
        int aux;
        aux = *a;
        *b = *a;
        aux = *b;
        return;
    }
    int main(){
        int a, b;
        printf("Escreva dois valores inteiros: ");
        scanf("%d%d", &a , &b);
        troca(&a, &b);
        printf("Os valores trocados sao: %d,%d", a, b);
        return 0;
    }

