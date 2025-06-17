#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]", str);
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = toupper(str[i]);
    }
    str[0] = toupper(str[0]);
    printf("%s\n", str);
    return 0;
}