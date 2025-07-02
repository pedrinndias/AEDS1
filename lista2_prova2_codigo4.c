#include <stdio.h>
#include <stdlib.h>
int soma_maior(int *matriz, int n){
    int soma = 0;
    int soma_elementos =0; 

    for(int i =0; i < n; i++){
        for(int j =0; j < n; j++){
            soma += matriz[i *n +j];
        }
    }
    float media = (float)soma / (n *n);

    for(int i =0; i < n ; i++){
        for(int j = 0; j < n; j++){
            if(matriz[i * n + j] > media){
                soma_elementos+= matriz[i *n + j];
            }
        }    
    }
    return soma_elementos;
}
int main(){
int *matriz;
int n;
printf("Digite o tamanho da matriz: ");
scanf("%d", &n);
matriz = (int *) malloc ((n*n) * sizeof(int));
if(matriz == NULL){
    printf("Erro de alocacao!");
    return 1;
}
printf("Agora preencha a matriz :");
for(int i =0; i < n; i++){
    for(int j = 0 ; j < n; j++){
        scanf("%d", &matriz[i *n + j]);
    }
}
int resultado  = soma_maior(matriz, n);
printf("A soma dos elementos maiores que a media eh: %d", resultado);
free(matriz);
return 0;
}