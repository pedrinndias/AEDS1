#include <stdio.h>
int main() {
    int opcao=0, num1=0, num2=0;
    float resultado=0;
    do{
        printf("\n");
        printf("1. Somar dois numeros\n");
        printf("2. Subtrair dois numeros\n");
        printf("3. Multiplicar dois numeros\n");
        printf("4. Dividir dois numeros\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                printf("Digite dois numeros: ");
                scanf("%d %d", &num1, &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                printf("Digite dois numeros: ");
                scanf("%d %d", &num1, &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                printf("Digite dois numeros: ");
                scanf("%d %d", &num1, &num2);
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                printf("Digite dois numeros: ");
                scanf("%d %d", &num1, &num2);
                if (num2 != 0) {
                    resultado = (float)num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                }
                break;
        
        }    
    }
    while (opcao != 5);

    if (opcao == 5) {
        printf("Saindo do programa\n");
    } else {
        if(opcao <= 0 || opcao > 5)    
        printf("Opcao invalida\n");
    }
    return 0;
}