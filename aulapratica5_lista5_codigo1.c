#include<stdio.h>
int par(int n){
    int resultado=0;
for(int i=1; i<=n; i++){
resultado+=2;
}
return resultado;
}
int main(){
    int n_esimo, termo;
    printf("Escreva numero n:");
    scanf("%d", &n_esimo);
    termo = par(n_esimo);
    printf("o n-esimo termo eh %d", termo);
    return 0;
}
