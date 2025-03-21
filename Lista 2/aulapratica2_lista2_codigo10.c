#include<stdio.h>
#include<math.h>
int main(){
    int cat1, cat2;
    float hip;
    printf("Digite os valores dos catetos: ");
    scanf("%d %d", &cat1, &cat2);
    hip = sqrt(pow(cat1,2)+pow(cat2,2));
    printf("O valor da hipotenusa e: %.2f\n", hip);
    return 0;
}
