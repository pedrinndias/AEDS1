#include <stdio.h.>
int main(){
    int vetor[10], contpar=0;
    for (int i=0; i<10; i++){
        printf("Digite o um numero: \n");
        scanf("%d", &vetor[i]);
    }
for (int i=0; i<10; i++){
    if(vetor[i]%2==0){
        contpar++;
    }
}
printf("A quantidade de numeros pares e: %d", contpar);
return 0;
}