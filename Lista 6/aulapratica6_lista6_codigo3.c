#include<stdio.h>
void atualizaNota(float *nota){
    if(*nota<=9.5){
        *nota += 0.5;
    }

    return;
}
int main(){
    float nota;
    printf("Escreva sua nota: ");
    scanf("%f", &nota);
    atualizaNota(&nota);
    printf("Sua nota atualizada eh: %.2f", nota);
    return 0;
}