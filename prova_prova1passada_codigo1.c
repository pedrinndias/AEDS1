#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    if((n%2)==0){
        printf("%.0f", pow(n, 2));
    }else{ if((n%2)!=0){
        printf("%.0f", pow(n, 3));
    }
}
return 0;
}