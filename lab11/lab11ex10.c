#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char arqEntrada[100];
    char arqSaida[100];
    char cidadeMaisPopulosa[40];
    int populacaoMaisPopulosa = 0;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", arqEntrada);
    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", arqSaida);

    FILE *fpEntrada;
    FILE *fpSaida;
    fpEntrada = fopen(arqEntrada, "r");
    fpSaida = fopen(arqSaida, "w");

    if (fpEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    if (fpSaida == NULL) {
        printf("Erro ao criar o arquivo de saida.\n");
        return 1;
    }

    char cid[40];
    int popul;
    while (fscanf(fpEntrada, "%s %d", cid, &popul) != EOF) {
        if (popul > populacaoMaisPopulosa) {
            strcpy(cidadeMaisPopulosa, cid);
            populacaoMaisPopulosa = popul;
        }
    }

    fprintf(fpSaida, "Cidade mais populosa: %s\n", cidadeMaisPopulosa);
    fprintf(fpSaida, "Populacao: %d\n", populacaoMaisPopulosa);

    fclose(fpEntrada);
    fclose(fpSaida);
    return 0;
}
