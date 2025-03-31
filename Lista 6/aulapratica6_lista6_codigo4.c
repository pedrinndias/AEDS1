#include <stdio.h> 
void maiorMenor(int a, int b, int *maior, int *menor){
*maior=a>b?a:b;
*menor=a<b?a:b;
return;
}
int main(){
    int val1, val2, maior=0, menor=0;
    printf("Escreva dois numeros: ");
    scanf("%d %d", &val1, &val2);
    maiorMenor(val1, val2, &maior, &menor);
    printf("O maior eh: %d\n", maior);
    printf("O menor eh: %d\n", menor);
    return 0;
}