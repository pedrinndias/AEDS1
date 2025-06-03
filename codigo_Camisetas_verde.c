#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int solicitadas_pequenas = 0;
    int solicitadas_medias = 0;
    int tamanho_solicitado;

    for (int i = 0; i < n; i++) {
        scanf("%d", &tamanho_solicitado);
        if (tamanho_solicitado == 1) {
            solicitadas_pequenas++;
        } else {
            solicitadas_medias++;
        }
    }

    int produzidas_pequenas;
    scanf("%d", &produzidas_pequenas);

    int produzidas_medias;
    scanf("%d", &produzidas_medias);

    if (solicitadas_pequenas <= produzidas_pequenas && solicitadas_medias <= produzidas_medias) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}