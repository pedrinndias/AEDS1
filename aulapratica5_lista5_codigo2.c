#include<stdio.h>
int par(int n){
    int resultado=0;
        for(int i=1; i<=n; i++){
            resultado+=2;
}
return resultado;
}
int mostrarparemordemdecrescente(int n){
    int valor=0;
        for(int i=n; i>0; i--){
            valor=par(i);
            if(valor<n)
                printf("%d", valor);
}
    return valor;
}
int main(){
    int n_esimo, termo;
        printf("Escreva numero n:");
        scanf("%d", &n_esimo);
        termo = mostrarparemordemdecrescente(n_esimo);
        printf("o n-esimo termo eh %d", termo);
        return 0;
}
