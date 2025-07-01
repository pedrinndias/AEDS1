#include <stdio.h>
#include <stdlib.h>
int soma_elementos(int *vetor, int n){
    if(n == 0){
        return 0;
    }
    return *vetor + soma_elementos(vetor + 1, n -1);
}
int main(){
int *vetor;
int n;
printf("Digite o tamanho do vetor: ");
scanf("%d", &n);
vetor = (int *) malloc (n * sizeof(int));
if(vetor == NULL){
    printf("Erro na alocacao!");
    return 1;
}
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
int resultado = soma_elementos(vetor,n);
printf("O resultado da soma eh: %d", resultado);
free(vetor);
return 0;
}