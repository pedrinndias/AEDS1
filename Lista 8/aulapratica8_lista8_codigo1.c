#include <stdio.h>
int main(){
    int veto[10];
    for (int i=0; i<10; i++){
        printf("Digite o um numero: ");
        scanf("%d", &veto[i]);
    }
    for (int i=0; i<10; i++){
        printf("Elemento %d na posicao %d \n", veto[i], i);
    }
return 0;
}