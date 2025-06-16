#include <stdio.h>

#define TOTAL_ALUNOS 5
#define MEDIA_APROVACAO 6.0

typedef struct {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

int main() {
    Aluno alunos[TOTAL_ALUNOS];
    int i;
    int idx_maior_n1 = 0;
    int idx_maior_media = 0;
    int idx_menor_media = 0;
    float maior_n1;
    float maior_media;
    float menor_media;
    float media_atual;

    printf("--- Cadastro de Alunos ---\n");
    for (i = 0; i < TOTAL_ALUNOS; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        printf("Nota 3: ");
        scanf("%f", &alunos[i].nota3);
    }

    maior_n1 = alunos[0].nota1;
    media_atual = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3.0;
    maior_media = media_atual;
    menor_media = media_atual;

    for (i = 1; i < TOTAL_ALUNOS; i++) {
        if (alunos[i].nota1 > maior_n1) {
            maior_n1 = alunos[i].nota1;
            idx_maior_n1 = i;
        }

        media_atual = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;

        if (media_atual > maior_media) {
            maior_media = media_atual;
            idx_maior_media = i;
        }

        if (media_atual < menor_media) {
            menor_media = media_atual;
            idx_menor_media = i;
        }
    }

    printf("\n\n===== RESULTADOS =====\n");
    printf("\n--- Aluno com maior nota na Prova 1 ---\n");
    printf("Nome: %s, Nota: %.1f\n", alunos[idx_maior_n1].nome, alunos[idx_maior_n1].nota1);

    printf("\n--- Aluno com a MAIOR media geral ---\n");
    printf("Nome: %s, Media: %.1f\n", alunos[idx_maior_media].nome, maior_media);

    printf("\n--- Aluno com a MENOR media geral ---\n");
    printf("Nome: %s, Media: %.1f\n", alunos[idx_menor_media].nome, menor_media);

    printf("\n--- Situacao dos Alunos ---\n");
    for (i = 0; i < TOTAL_ALUNOS; i++) {
        media_atual = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3.0;
        printf("Aluno: %s | Media: %.1f | Situacao: ", alunos[i].nome, media_atual);
        if (media_atual >= MEDIA_APROVACAO) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}