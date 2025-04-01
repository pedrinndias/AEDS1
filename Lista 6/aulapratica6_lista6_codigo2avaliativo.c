#include <stdio.h>
void linha(int n){
    while (n>0){
        printf("%d ", n);
        n--;
    }
    printf("\n");
    return;
}
int main(){
    int num;
    printf("Escreva um numero: ");
    scanf("%d", &num);
    for (int i=num; i>=0; i--){
        linha(i);
    }
return 0;
}