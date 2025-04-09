#include <stdio.h>
    int soma_div(int n){
        int soma=0;
        for(int=1; i<n; i++){
            if(n%i==0){
                soma+=i;
            }
        }
        return soma;
    }
    int main(){
        int num;
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
        printf("A soma dos divisores de %d eh: %d\n", num, soma_div(num));
        return 0;
    }

