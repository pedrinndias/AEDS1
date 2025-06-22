#include<stdio.h>
int main() {
   FILE *fp;
   fp = fopen("aulapratica12_lista12_codigo1.txt", "r");
   if(fp == NULL) {
       printf("Erro ao abrir o arquivo para leitura.\n");
       return 1;
   }
   int contA=0;
   char linha[256];
    while(fgets(linha, sizeof(linha), fp) != NULL)
    {
        for (int i = 0; linha[i] != '\0'; i++) {
            if(linha[i] == 'A' || linha[i] == 'a') {
                contA++;
            }
        }
    }
   printf("O numero de letras A no arquivo e: %d\n", contA);
   fclose(fp);
   return 0;
}