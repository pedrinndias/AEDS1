#include<stdio.h>
float media(*n,*quantN){
    int seq=0;
    float media;
    seq += *n;
    media = seq / *quantN;
    return media;
}
int main(){
    int n=1, quantImpares=0, quantN=0;
    for(int i=0; n!= 0; i++){
        printf("Escreva um numero: ");
        scanf("%d", &n);
        if ((n%2) != 0){
        quantImpares++;
        }
        if (n!=0){
        quantN++;
        }
    media(&n, &quantN);
    }
    printf("A media dos numeros eh: %f\n", media(&n, &quantN));
    printf("A quantidade de numeros impares eh: %d\n", quantImpares);
    return 0;   
}