#include <stdio.h>
int main(){
int seq[5], crescente[5], decrescente[5], NAOordenada[5], contC=0, contD=0;
printf("Digite a sequencia de cartas: \n");
scanf("%d %d %d %d %d", &seq[0], &seq[1], &seq[2], &seq[3], &seq[4]);
for (int i = 0; i < 5; i++){
    crescente[i] = seq[i];
    decrescente[i] = seq[i];
    NAOordenada[i] = seq[i];
}
for (int i = 0; i < 5; i++){ //1 2 3 4 5      9 8 7 6 5
    for (int j = i + 1; j < 5; j++){
        if (crescente[i] > crescente[j]){
            int temp = crescente[i];
            crescente[i] = crescente[j];
            crescente[j] = temp;
        }
        if (decrescente[i] < decrescente[j]){
            int temp = decrescente[i];
            decrescente[i] = decrescente[j];
            decrescente[j] = temp;
        }
    }
    if (crescente[i] == seq[i]){
        contC++;
    }
    if (decrescente[i] == seq[i]){
        contD++;
    }
}
if (contC == 5){
    printf("C");
}
else if (contD == 5){
    printf("D");
}
else { 
    printf("N");
}
return 0;
}
