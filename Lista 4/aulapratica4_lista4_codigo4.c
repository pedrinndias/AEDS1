#include<stdio.h>
int main(){
    int num1,num2,a,b, multiplos;
    num1=0;
    num2=0;
    a=0;
    b=0;
   do {
         printf("Digite dois numeros inteiros: ");
         scanf("%d %d", &num1, &num2);
    if(num1==num2){
        printf("Os numeros sao iguais, digite novamente\n");
    }
    } while(num1==num2);
    if(num1<num2){
        a = num1;
        b = num2;
    } else if (num2<num1){
        a = num2;
        b = num1;
    }
    for (int i = a; i <= b; i++){
        if(i%5==0){
            printf("%d\n", i);
            multiplos = 1;
        }
    }
    if (multiplos!=1){
        printf("Nao existem multiplos de 5 entre %d e %d\n", a, b);
    }
    return 0;
}
