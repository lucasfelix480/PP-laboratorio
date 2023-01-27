#include <stdio.h>
#include <string.h>

int main() {
    char entrada[100], saida[100];
    char linha[31];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", entrada);
    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", saida);

    FILE *arqEntrada = fopen(entrada, "r");
    FILE *arqSaida = fopen(saida, "w");

    if (arqEntrada == NULL || arqSaida == NULL) {
        printf("Erro ao abrir arquivos");
        return 1;
    }

    while (fgets(linha, 31, arqEntrada) != NULL) {
        int tamanho = strlen(linha);
        for (int i = tamanho - 1; i >= 0; i--) {
            fputc(linha[i], arqSaida);
        }
    }

    fclose(arqEntrada);
    fclose(arqSaida);
    return 0;
}
