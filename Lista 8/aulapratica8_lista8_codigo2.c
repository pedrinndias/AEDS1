#include <stdio.h>
int main(){
    float vetor[10], maior=0, posicao=0;
    for (int i=0; i<10; i++){
        printf("Digite o um numero: ");
        scanf("%f", &veto[i]);
    }
    for (int 1=0; i<10; i++){
        if(vetor[i]>maior){
            maior=vetor[i];
        }
    }
    for (int i=0; i<10; i++){
        if(vetor[i]==maior){
            posicao=i;
        }
    }
    printf("O maior numero e: %.2f na posicao: %.0f", maior, posicao);
    return 0;
}