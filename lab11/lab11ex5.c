#include <stdio.h>
#include <stdlib.h>

int main() {
    char arq[100];
    char car;
    int cont = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", arq);
    printf("Digite o caractere a ser contado: ");
    scanf(" %c", &car);

    FILE *fp;
    fp = fopen(arq, "r");

    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    char c;
    while((c = fgetc(fp)) != EOF) {
        if (c == car) {
            cont++;
        }
    }

    printf("O caractere '%c' ocorre %d vezes no arquivo.\n", car, cont);

    fclose(fp);
    return 0;
}
