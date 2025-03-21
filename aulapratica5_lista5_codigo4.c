#include <stdio.h>
double umSobreImpar(int n){
    double resultado;
    int denominador=1;
    for(int i=1; i<=n; i++){
        resultado= 1.0 /(denominador+= 2);
        
}

return resultado;
}

double somaumsobreimpar (int n){
    double somatorio=0;
    for (int i=1; i<=n; i++){
        somatorio= somatorio + umSobreImpar(i);
    }
return somatorio;
}
int main(){
    int n_esimo;
    double termo;
    printf("Escreva numero n:");
    scanf("%d", &n_esimo);
    termo = somaumsobreimpar(n_esimo);
    printf("%.2f", termo);
    return 0;
}