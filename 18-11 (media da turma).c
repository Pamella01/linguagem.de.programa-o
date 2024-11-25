#include <stdio.h>
int main (){

    int total_alunos, i;
    float nota, soma = 0, media;
    printf("Total de alunos: ");
    scanf("%d", &total_alunos);
    for (i = 1; i <= total_alunos; i++) {
            printf("%d nota: ", i);
            scanf("%f", &nota);
            soma += nota;
    }
    media = soma / total_alunos;
    printf("Media da turma = %.1f\n", media);
    return 0;
    }