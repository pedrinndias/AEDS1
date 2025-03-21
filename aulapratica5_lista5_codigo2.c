#include<stdio.h>
vois mostrarparemordemdecrescente(int n){
for(int i=n; i>0; i--){
resultado+=2;
}
return resultado;
}
int main(){
    int n_esimo, termo;
    printf("Escreva numero n:");
    scanf("%d" &n_esimo);
    termo= par(n_esimo);
    printf("o n-esimo termo eh %d", termo);
    return 0;
}
