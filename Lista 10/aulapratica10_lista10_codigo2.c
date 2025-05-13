#include <stdio.h>
int main(){
    char frase[100];
    printf("Digite uma frase:");
    scanf("%[^\n]", frase);
    for (int i=0; i<5; i++){
        printf("%c\n", frase[i]);
    }
    return 0;
}