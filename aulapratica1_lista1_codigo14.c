#include<stdio.h> 
int main(){
    int num, suc;
    printf("Escreva um numero entre 0 e 60: ");
    scanf("%d", &num);
    if((num>=0)||(num<=60)){
        suc=num+1;
        printf("O sucessor de %d e: %d\n", num, suc);
    }
    else{ if(num==60){
        printf("O numero e 60, nao ha sucessor\n");}
        else
        printf("O numero nao esta entre 0 e 60\n");
    }
}
    