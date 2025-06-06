#include<stdio.h>
int main(){
    int val;
    float seq = 0, den = 1, num = 1;
    scanf("%d", &val);
    for (int i = 1; i <= val; i++){
        seq += num / den;
        num += 2;
        den ++;
    }
    printf("%.2f\n", seq);
    return 0;
}