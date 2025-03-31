    #include <stdio.h>
    #include <math.h>
    void calculaPotencias(int n, int *quadrado, int *cubo){
        *quadrado=pow(n,2);
        *cubo=pow(n,3);
        return;
    }
    int main(){
        int numero, quadrado=0, cubo=0;
        printf("Escreva um numero: ");
        scanf("%d", &numero);
        calculaPotencias(numero, &quadrado, &cubo);
        printf("O quadrado de %d eh: %d\n", numero, quadrado);
        printf("O cubo de %d eh: %d\n", numero, cubo);
        return 0;
    }