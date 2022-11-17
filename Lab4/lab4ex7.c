#include <stdio.h>

int main(){

int n, i, soma  = 0;

float med = 0;

printf("Digite 10 números inteiros positivos: ");

for (i = 1; i <= 10; i++){

    printf("\n%d ", i);

    scanf("%d", &n);

    while(n<=0){

        printf("Numero nao positivo. \n%d ", i);

        scanf("%d", &n);

    }

    soma = soma +n;

}

med = soma/10;

printf("\n media dos numeros %f", med);

return 0;

}