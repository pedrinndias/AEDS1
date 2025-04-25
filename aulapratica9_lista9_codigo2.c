#include <stdio.h>
int preenchervetor(int vetor[], int tam){
    vetor[0]= 0;
for(int i=0; i<tam; i++){
    vetor[i]++;
    if(((vetor[i]%10)==6) || ((vetor[i])/6==0) ){
        vetor[i]++;
    }
}
}
int main(){
    int vetor[100], tam;
    preenchervetor (vetor[], 100)
    for (int)

}