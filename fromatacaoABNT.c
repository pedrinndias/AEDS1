#include<stdio.h>
#include<ctype.h>
int main(){
    char string[100];
    printf("Digite uma string: ");
    scanf("%[^\n]", string);
    for(int i = 0; string[i] != '\0'; i++){
        if(string[i] >= 'a' && string[i] <= 'z'){
            string[i] = toupper(string[i]);
        }
    }
    printf("String formatada: %s\n", string);
    return 0;
}