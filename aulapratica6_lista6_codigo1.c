#include<stdio.h>
    void troca (int*a , int*b){
        int aux;
        *a = aux;
        *a = *b;
        *b = aux;
        return;
    }
    int main(){
        int a, b;
        printf("Escreva dois valores inteiros: ");
        scanf("%d%d", &a , &b);
        void troca();
        printf("Os valores trocados sao: %d,%d", a, b);
        return 0;
    }
