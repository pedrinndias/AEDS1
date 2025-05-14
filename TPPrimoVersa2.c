#include <stdio.h>
int verificadorP(int i){
    int cont = 0;
    for (int j = 1; j <= (i/2); j++){
        if ((i/2) % j == 0){
            cont++;
        }
    }
    if (cont == 2){
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
    int cont = 0, menor, maior, primo[maior - menor];
    scanf("%d %d", &menor, &maior);
    for (int i = menor; i <= maior; i++){
        if (verificadorP(i) == 1){
            primo[cont] = i;
            cont++;
        }
    }
    for (int i = 0; i < cont; i++){
        printf("%d ", primo[i]);
    }
    return 0;
}