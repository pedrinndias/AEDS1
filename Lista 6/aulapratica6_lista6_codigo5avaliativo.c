    #include <stdio.h>
    #include <math.h>
    void calculaPotencias(int n, double *quadrado, double *cubo){
        *quadrado=pow(n,2);
        *cubo=pow(n,3);
        return;
    }
    int main(){
        int numero;
        double quadrado=0, cubo=0;
        printf("Escreva um numero: ");
        scanf("%d", &numero);
        calculaPotencias(numero, &quadrado, &cubo);
        printf("O quadrado de %d eh: %.0f\n", numero, quadrado);
        printf("O cubo de %d eh: %.0f\n", numero, cubo);
        return 0;
    }