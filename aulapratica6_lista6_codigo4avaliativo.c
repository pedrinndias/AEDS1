#include <stdio.h>
int main() {
    int opcao=0, num1=0, num2=0;
    float resultado=0;
    do
        printf("1. Somar dois números\n");
        printf("2. Subtrair dois números\n");
        printf("3. Multiplicar dois números\n");
        printf("4. Dividir dois números\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                printf("Você escolheu somar dois números.\n");
                printf("Digite dois números: ");
                scanf("%d %d", &num1, &num2);
                resultado = num1 + num2;
                printf("Resultado: %f\n", resultado);
                break;
            case 2:
                printf("Você escolheu subtrair dois números.\n");
                printf("Digite dois números: ");
                scanf("%d %d", &num1, &num2);
                resultado = num1 - num2;
                printf("Resultado: %f\n", resultado);
                break;
            case 3:
                printf("Você escolheu multiplicar dois números.\n");
                printf("Digite dois números: ");
                scanf("%d %d", &num1, &num2);
                resultado = num1 * num2;
                printf("Resultado: %f\n", resultado);
                break;
            case 4:
                printf("Você escolheu dividir dois números.\n");
                printf("Digite dois números: ");
                scanf("%d %d", &num1, &num2);
                if (num2 != 0) {
                    resultado = (float)num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                }
                break;
        
    }
    while (opcao != 5);
    if (opcao == 5) {
        printf("Saindo do programa\n");
    }
}