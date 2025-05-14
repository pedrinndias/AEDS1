#include <stdio.h>
#include <stdlib.h>
int main(){
    int intervalo, tam, *notas;
    float media = 0;
    scanf("%d", &intervalo);
    do
    {
    scanf("%d", &tam);
    notas = (int*)malloc(tam*sizeof(int));
    for (int i = 0; i < tam; i++)
        {
            scanf("%d", &notas[i]);
        }
    for (int i = 0; i < tam; i++)
        {
            media += notas[i];
        }
    media = media/tam;
    printf("%.3f\n", media); 

    intervalo --;
    } while (intervalo == 0);
    free(notas);
    return 0;
}