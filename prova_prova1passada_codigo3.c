#include <stdio.h>
double sequencia(int n, float x){
    int denominador=2, i;
    float seq;
    for (i=0; i<=n; i++){
        if (i==0){
            seq=0;
        } else if(i%2!=0){
            seq+=x/denominador;
        } else {
            seq-=x/denominador;
        }
        denominador+=2;
        }
    return seq;
    }
int main(){
    int n;
    float x, seq2;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Digite um numero real: ");
    scanf("%f", &x);
    sequencia(n, x) = seq2;
    print("Sequencia: %.2f\n", seq2);
    return 0;
}