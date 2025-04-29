#include <stdio.h>
int main(){
    int vetor1[5];
    int vetor2[5];
    int vetor3[5];
for (int i=0; i<5; i++){
    printf("Digite o um numero para preencher o vetor 1: ");
    scanf("%d", &vetor1[i]);
}
for (int i=0; i<5; i++){
    printf("Digite o um numero para preencher o vetor 2: ");
    scanf("%d", &vetor2[i]);
}
for (int i=0; i<5; i++){
    vetor3[i]=vetor1[i]+vetor2[i];
}
for (int i=0; i<5; i++){
    printf("A soma do valor %d do vetor 1 com o vetor 2 eh: \n", i);
    printf("%d\n", vetor3[i]);
}
return 0;
}