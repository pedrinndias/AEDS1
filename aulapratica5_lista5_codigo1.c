#include<stdio.h>
int par(int n, int resultado){
for(int i=0; i<=n; i++){
resultado+=2;
}
return resultado;
}
int main(){
    int n_esimo, termo;
    printf("Escreva numero n:");
    scanf("%d", &n_esimo);
    par(n_esimo);
    printf("o n-esimo termo eh %d", par);
    return 0;
}
