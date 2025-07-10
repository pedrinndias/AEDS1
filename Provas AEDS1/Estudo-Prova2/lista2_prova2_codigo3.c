#include <stdio.h>
#include <stdlib.h>
float multiplica(float *n, int tam){
if(tam == 0){
    return 1;
}
return *n * multiplica(n+1, tam-1);
}
int main(){
float *n;
int tam;
printf("Qual sera o tamanho do vetor? ");
scanf("%d", &tam);
n = (float *) malloc (tam * sizeof(float));
if(n == NULL){
    printf("Erro na alocacao!");
    return 1;
}
printf("Digite os valores: ");
for(int i =0; i < tam; i++){
    scanf("%f", n+i);
}
 float resultado = multiplica(n, tam);
printf("O resultado da multiplicacao eh: %.2f", resultado);
free(n);
return 0;
}