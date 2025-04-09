#include <stdio.h>
int main(){
    int x,y,impares=0, maior=0, menor=0;
    printf("Escreva dois numeros inteiros: ");
    scanf("%d%d", &x, &y);
    maior=x>y?x:y;
    menor=x<y?x:y;
    for(int i=menor; i<=maior; i++){
        if(i%2!=0){
            printf("%d", i);
            impares ++;
        }
    }
    if(impares==0){
        printf("Nao existe numeros impares enre x e y")
    }
    return 0;
}