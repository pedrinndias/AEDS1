#include <stdio.h>
double sequencia(int n, float x){
    int denominador=2, i;
    double seq;
    for (i=0; i<=n; i++){
        if (i==0){
            seq=0;
        } else if(i%2!=0){
            seq+=x/denominador;
            denominador+=2;
        } else {
            seq-=x/denominador;
            denominador+=2;
        }
        }
    return seq;
    }
    
int main(){
    int n;
    float x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Digite um numero real: ");
    scanf("%f", &x);
    printf("Sequencia: %.2f\n",sequencia(n, x));
    return 0;
}