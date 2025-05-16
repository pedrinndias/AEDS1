#include <stdio.h>
#include <stdlib.h>
int main(){
    int *vetorI;
    float *vetorF;
    char *vetorC;
    vetorI = (int *) malloc(1 * sizeof(int));
    vetorF = (float *) malloc(1 * sizeof(float));
    vetorC = (char *) malloc(1 * sizeof(char));
    if (vetorI==NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }
    if (vetorF==NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }
    if (vetorC==NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }
    printf("Escreva um numero inteiro:\n");
    scanf("%d", vetorI);
    printf("Escreva um numero real:\n");
    scanf("%f", vetorF);
    printf("Escreva um caractere:\n");
    fflush(stdin);
    scanf("%c", vetorC);

    printf("%d", *vetorI);
    printf("%.2f", *vetorF);
    printf("%c", *vetorC);
    free(vetorI);
    free(vetorF);
    free(vetorC);
    return 0;
}