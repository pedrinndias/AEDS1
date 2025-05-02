#include <stdio.h>
int main(){
    char frase[100];
    printf("Digite uma frase:");
    scanf("%[^\n]", frase);
    for (int i=0; i<4; i++){
        printf("%c", frase[i])
    }
    return 0;
}