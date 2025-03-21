#include <stdio.h>
int main(){
    int hora, minutos, tempfinal;
    printf("Escreva a hora e os minutos: ");
    scanf("%d %d", &hora, &minutos);
    tempfinal=hora*60+minutos;
    printf("O tempo total em minutos e: %d\n", tempfinal);
    return 0;
}
