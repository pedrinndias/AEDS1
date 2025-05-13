#include <stdio.h>
int main(){
    char frase[100];
    printf("Digite uma frase:");
    scanf("%[^\n]", frase);
    printf("%s", frase);
    return 0;
}