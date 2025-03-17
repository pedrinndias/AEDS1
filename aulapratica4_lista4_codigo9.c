#include<stdio.h>
int main(){
    int num1, anterior=1, atual=1, proximo;
    printf("Esreva um numero inteiro: ");
    scanf("%d", &num1);
    if((num1==1)||(num1==2)){
        printf("1\n");
    }else for (int i = 3; i <= num1; i++){
        proximo=anterior + atual;
        anterior=atual;
        atual=proximo;
   }
   printf("%d\n", proximo);
    return 0;
}