#include<stdio.h>
int main()
FILE *fp1
c
fp1=fopen("arquivo1.txt", "w");
if(fp1 == NULL)
{
    printf("Erro ao abrir o arquivo para escrita.\n");
    return 1;
}
