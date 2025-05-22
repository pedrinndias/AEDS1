#include <stdio.h>
int multiRec(int a, int b) {
    if (b == 1) {
        return a;
    } else {
        return a + multiRec(a, b - 1);
    }
}
int main() {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("%d * %d = %d\n", a, b, multiRec(a, b));
    return 0;
}