#include <stdio.h>

int verificadorP(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int menor, maior;
    scanf("%d %d", &menor, &maior);
    for (int i = menor; i <= maior; i++) {
        if (verificadorP(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}