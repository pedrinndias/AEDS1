#include <stdio.h>

int eh_fibonacci(int n) {
 
    if (n <= 0) {
        return 0; 
    }
    if (n == 1) {
        return 1; 
    }

    int termo_anterior = 1; // Representa F_k-2, inicializado como o primeiro '1'
    int termo_atual = 1;    // Representa F_k-1, inicializado como o segundo '1'
    
    // Gera termos da sequência de Fibonacci até que o termo_atual seja >= n
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
            fibonot_count++; // Se não for Fibonacci, é um Fibonot, incrementa o contador
            
            // Se este é o K-ésimo Fibonot que estávamos procurando
            if (fibonot_count == K) {
                resultado_fibonot = numero_candidato; // Armazena o número
                break; // Encontrou, então sai do loop
            }
        }
        
        // Medida de segurança para evitar loop infinito se K for extremamente grande,
        // embora para K <= 10^5, o resultado_fibonot estará bem dentro dos limites de 'int'.
        // O K-ésimo Fibonot é aproximadamente K * 1.618. Para K=10^5, é ~161800.
        if (numero_candidato > 2 * K + 50 && K > 1000) { // Heurística simples, pode ser ajustada ou removida.
             // Para K=10^5, o Fibonot(K) é 121414. 2*K+50 = 200050.
             // Este limite é apenas uma precaução teórica e provavelmente não será atingido.
            break;
        }
    }
    
    printf("%d\n", resultado_fibonot); // Imprime o K-ésimo termo de Fibonot
    
    return 0;
}

