#include<stdio.h>
int main() {
   FILE *fp;
   fp = fopen("aulapratica12_lista12_codigo1.txt", "r");
   if(fp == NULL) {
       printf("Erro ao abrir o arquivo para leitura.\n");
       return 1;
   }
   int contA=0;
   char veri[100];
   while(fgets(&veri,99, fp) != NULL) {
       if(veri == 'A' || veri == 'a') {
           contA++;
       }
   }
   printf("O numero de letras A no arquivo e: %d\n", contA);
   fclose(fp);
   return 0;
}