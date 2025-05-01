#include <stdio.h>
int subvetores(int A[], int B[], int C[]){
    for (int i=0; i<10; i++){
        C[i] = A[i] - B[i];
    }
    return C[];
}
int main(){
    int A[10];
    int B[10];
    int C[10];
    for (int i=0; i<10; i++){
        printf("Digite o %d elemento do vetor A: ", i+1);
        scanf("%d", &A[i]);
    }
    for (int i=0; i<10; i++){
        printf("Digite o %d elemento do vetor B: ", i+1);
        scanf("%d", &B[i]);
    }
    subvetores(A, B, C);
    for (int i=0; i<10; i++){
        printf("O %d elemento do vetor C eh: %d\n", i+1, C[i]);
    }
    return 0;
}