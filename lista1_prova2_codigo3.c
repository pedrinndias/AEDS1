#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int diagonal(int *matriz, int n){
    int soma = 0;
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j > i ){
                soma += matriz[i *n +j];
            }
        }
    }
    return soma;
}
int main(){
int *matriz;
int n;
printf("Digite as dimensoes da matriz quadrada: ");
scanf("%d", &n);
matriz = (int *) malloc ((n * n) * sizeof(int));
if(matriz == NULL){
    printf("Erro de alocacao!");
    return 1;
}
srand (time(NULL));
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        matriz[i * n + j] = rand () % 100 + 1;
    }
}
printf("Matriz gerada:\n");
for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        printf("%4d", matriz[i * n + j]);
    }
    printf("\n");
}
int resultado = diagonal(matriz, n);
printf("Aqui esta a soma dos elementos acima da diagonal superior: %d.\n", resultado);
free (matriz);
return 0;
}