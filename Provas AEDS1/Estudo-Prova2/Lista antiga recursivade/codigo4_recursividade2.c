#include <stdio.h>
int fibonaci(int n) {
    if (n ==0 || n == 1) {
        return 1;
    } else {
        return fibonaci(n - 1) + fibonaci(n - 2);
    }
}
int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    fibonaci(n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonaci(i));
    }
    printf("\n");
    return 0;
}