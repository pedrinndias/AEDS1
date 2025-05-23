#include<stdio.h>
int contagemR(int n){
    if (n==50){
        printf("%d ", n);
        return 50;
    }
    else {
        printf("%d ", n);
        return contagemR(n+1);
    }
}
int main(){
    int n=1;
    contagemR(n);
    return 0;
}