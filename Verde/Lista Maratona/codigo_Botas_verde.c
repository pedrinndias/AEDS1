#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int botas_esquerdas[61] = {0};
    int botas_direitas[61] = {0};
    for (int i = 0; i < n; i++) {
        int tamanho;
        char pe;
        scanf("%d %c", &tamanho, &pe);

        if (pe == 'E') {
            botas_esquerdas[tamanho]++;
        } else if (pe == 'D') {
            botas_direitas[tamanho]++;
        }
    }
    int pares_corretos = 0;
    for (int tamanho = 30; tamanho <= 60; tamanho++) {
        int pares_neste_tamanho = 0;
        if (botas_esquerdas[tamanho] < botas_direitas[tamanho]) {
            pares_neste_tamanho = botas_esquerdas[tamanho];
        } else {
            pares_neste_tamanho = botas_direitas[tamanho];
        }
        pares_corretos += pares_neste_tamanho;
    }
    printf("%d\n", pares_corretos);
    return 0;
}