#include<stdio.h>
int par(int n){
    int resultado=0;
        for(int i=1; i<=n; i++){
            resultado+=2;
}
return resultado;
}
void mostrarparemordemdecrescente(int n){
    int valor;
        for(int i=n; i>0; i--){
            valor=par(i);
            if(valor<n)
                printf("%d" valor);
}
    return resultado;
}
int main(){
    int n_esimo, termo;
        printf("Escreva numero n:");
        scanf("%d" &n_esimo);
        mostrarparemordemdecrescente(n_esimo)
        return 0;
}
