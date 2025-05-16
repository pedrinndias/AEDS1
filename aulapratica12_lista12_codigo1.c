#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int *vetor;
    srand(time(NULL));
    vetor = (int *) malloc(1000 * sizeof(int));
    if (vetor==NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }
    for (int i=0; i<1000; i++){
        vetor[i] = (rand()%10 + 1);
    }
    for (int i=0; i<1000; i++){
    printf("%d\n", vetor[i]);
    }
    free(vetor);
    return 0;
}