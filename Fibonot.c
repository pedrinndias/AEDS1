#include <stdio.h>

int eh_fibonacci(int n) {
    if (n <= 0) {
        return 0; 
    }
    if (n == 1) {
        return 1; 
    }
    int termo_anterior = 1;
    int termo_atual = 1;
    while (termo_atual < n) {
        int proximo_fib = termo_anterior + termo_atual;
        termo_anterior = termo_atual;
        termo_atual = proximo_fib;
    }
    if (termo_atual == n) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int K;
    scanf("%d", &K); 
    int fibonot_count = 0; 
    int resultado_fibonot = 0; 

    for (int numero_candidato = 1; ; numero_candidato++) {
        if (eh_fibonacci(numero_candidato) == 0) { 
            fibonot_count++;
            if (fibonot_count == K) {
                resultado_fibonot = numero_candidato;
                break;
            }
        }
    } 
    printf("%d", resultado_fibonot);
    return 0; 
}
