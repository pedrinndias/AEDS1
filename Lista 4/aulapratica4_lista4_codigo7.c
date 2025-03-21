#include<stdio.h>
int main(){
    float nota;
    do {
        printf("Digite uma nota entre 0 e 10: ");
        scanf("%f", &nota);
        if(nota<0 || nota>10){
            printf("Nota invalida, digite novamente\n");
        }
    } 
    while(nota<0 || nota>10);
    printf("Nota registrada: %.2f\n", nota);
    return 0;
}
