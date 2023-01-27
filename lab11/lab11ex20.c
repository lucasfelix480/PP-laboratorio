#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numAlunos;
    printf("Digite o numero de alunos: ");
    scanf("%d", &numAlunos);

    char** nomes = (char**) malloc(numAlunos * sizeof(char*));
    float* notas = (float*) malloc(numAlunos * sizeof(float));

    for (int i = 0; i < numAlunos; i++) {
        nomes[i] = (char*) malloc((40 + 1) * sizeof(char));
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite a nota final do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);

        // completar com espaços em branco se necessário
        int tamanhoNome = strlen(nomes[i]);
        for (int j = tamanhoNome; j < 40; j++) {
            nomes[i][j] = ' ';
        }
        nomes[i][40] = '\0';
    }

    FILE *fp;
    fp = fopen("alunos.txt", "w");
    if (fp == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }

    for (int i = 0; i < numAlunos; i++) {
        fprintf(fp, "%s %.2f\n", nomes[i], notas[i]);
    }

    fclose(fp);

    for (int i = 0; i < numAlunos; i++) {
        free(nomes[i]);
    }
    free(nomes);
    free(notas);
    return 0;
}
