#include <stdio.h>
double umSobreImpar(int n){
    double resultado;
    int denominador=1;
    for(int i=1; i<=n; i++){
        resultado= 1.0 /(denominador+= 2);
        
}

return resultado;
}
int main(){
    int n_esimo;
    double termo;
    printf("Escreva numero n:");
    scanf("%d", &n_esimo);
    termo = umSobreImpar(n_esimo);
    printf("%.2f", termo);
    return 0;
}
