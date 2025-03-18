#include<stdio.h>
int main(){
    float x, y;
 do {
         printf("Digite o valor de x: ");
             scanf("%f", &x);
         printf("Digite o valor de y: ");
            scanf("%f", &y);
     if(x>0 && y>0){
         printf("O ponto (%.2f, %.2f) esta no primeiro quadrante\n", x, y);
    } else if(x<0 && y>0){
         printf("O ponto (%.2f, %.2f) esta no segundo quadrante\n", x, y);
    } else if(x<0 && y<0){
         printf("O ponto (%.2f, %.2f) esta no terceiro quadrante\n", x, y);
    } else if(x>0 && y<0){
         printf("O ponto (%.2f, %.2f) esta no quarto quadrante\n", x, y);
    } else if(x==0 && y!=0){
         printf("O ponto (%.2f, %.2f) esta no eixo y e nao pertence a nenhum quadrante \n", x, y);
    } else if(x!=0 && y==0){
         printf("O ponto (%.2f, %.2f) esta no eixo x e nao pertence a nenhum quadrante\n", x, y);
    }

}    while(x!=0 || y!=0);
if(x==0 && y==0){
    printf("O ponto (%.2f, %.2f) esta na origem\n", x, y);
}
return 0;
}