#include <stdio.h>
void converteTermpo(int segundos, int*horas, int*minutos, int*segundosRestantes){
    *horas= *minutos/60;
    *minutos=(segundos/60)%60;
    *segundosRestantes=segundos%60;
    return;
}
int main(){
    int segundos, horas=0, minutos=0, segundosRestantes=0;
    printf("Escreva o tempo em segundos: ");
    scanf("%d", &segundos);
    converteTermpo(segundos, &horas, &minutos, &segundosRestantes);
   printf("O tempo eh: %d:%d:%d\n", horas, minutos, segundosRestantes);
    return 0;
}