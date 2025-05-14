#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarMaiusculas(char *str) {
    int contador = 0; 
    for (int i = 0; str[i] != '\0'; i++) {

        if (isupper(str[i])) {
            contador++;
        }
    }
    return contador; 
}

int main() {
    char linha[1024];
    while (fgets(linha, sizeof(linha), stdin) != NULL) {
        linha[strcspn(linha, "\n")] = '\0';

        if (strcmp(linha, "FIM") == 0) {
            printf("\n");
            break;
        }

        int maiusculas = contarMaiusculas(linha);
    
        printf("%d\n", maiusculas);

    }
    return 0;
}

