#include <stdio.h>
#include <stdlib.h> 
int main() {
    int C;
    scanf("%d", &C);
    while (C--) {
        int N;
        scanf("%d", &N);
        int *notas;
        notas = (int *)malloc(N * sizeof(int));
        double soma = 0.0;
        for (int i = 0; i < N; i++) {
            scanf("%d", &notas[i]);
            soma += notas[i];
        }
        double media = soma / N;
        int acima_da_media = 0;
        for (int i = 0; i < N; i++) {
            if (notas[i] > media) {
                acima_da_media++;
            }
        }
        double percentual = ((double)acima_da_media / N) * 100.0;
        printf("%.3f%%\n", percentual);
    }
    return 0;
}
