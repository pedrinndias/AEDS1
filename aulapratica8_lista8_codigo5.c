#include<stdio.h>
#include<stdlin.h>
#include<time.h>
int main(){
int vetor[10];
int vetorpar[10];
srand(time(NULL));
for (int i=0; i<10; i++){
    vetor[i]=rand()%(20-5+1)+5;

}
for (int i=0; i<10; i++){
    if(vetor[i]%2==0){
        vetorpar[i]=vetor[i];
    }
    else{
        vetorpar[i]=0;
    }
}
for (int i=0; i<10; i++){
    printf("O vetor par eh: %d\n", vetorpar[i]);
}
for (int i=0; i<10; i++){
    printf("O vetor eh: %d\n", vetor[i]);
}
return 0;
}
