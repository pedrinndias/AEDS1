#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int vetor[6];
int aleatorio;
int repetido;
srand(time(NULL));
for(int i =0; i <6;  ){
aleatorio = rand() % 60 + 1;
repetido =0;
for(int j = 0; j < i; j++){
    if(*(vetor+j) == aleatorio){
        repetido =1;
        break;
    }
}
    if(!repetido){
        *(vetor+i) = aleatorio;
        i++;
    }              
}
for(int i = 0; i < 6 ; i++){
    printf("%d ", *(vetor + i));
}
return 0;
}