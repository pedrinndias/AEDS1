#include<stdio.h>
int par(int n, int resultado){
for(int i=0; i<=n; i++){
resultado+=2;
}
return resultado;
}
int main(){
    int n, termo;
    printf("Escreva numero n:");
    scanf("%d", &n);
    termo= par(n);
    printf("o n-esimo termo eh %d", termo);
    return 0;
}
