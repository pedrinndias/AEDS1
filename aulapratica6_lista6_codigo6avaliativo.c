#include <stdio.h>
void classificaNumero(int n, int *positivos, int *negativos){
if(n>0){
    (*positivos)++;
}
else if(n<0){
    (*negativos)++;
}
}
int main(){
    int n, positivos=0, negativos=0;
    do
    {
    printf("Escreva um numero: ");
    scanf("%d", &n);
    classificaNumero(n, &positivos, &negativos);
    } while (n!=0);
    if (n==0){
        printf("Numeros positivos: %d\n", positivos);
        printf("Numeros negativos: %d\n", negativos);
}
return 0;
}