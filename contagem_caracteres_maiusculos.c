#include<stdio.h>

int main(){
    char texto[100];
    int i, contagem = 0;
    do
    {
        /* code */
    } while (for (i = 0; texto[i] != '\0'; i++)); // Loop to count the number of uppercase letters
    
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>
int contarMaiusculas(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            count++;
        }
    }
    return count;
}
int main() {
    char str[1000]; 
    while (1) {
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = 0;
        if (strcmp(str, "FIM") == 0) {
            break;
        }
        printf("%d\n", contarMaiusculas(str));
    }
    return 0;
}

