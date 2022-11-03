#include<stdio.h>

int main(){

    float salario, prest_imprest;

    printf( "Digite o seu salario: \n");
    scanf("%f",&salario);
    printf("Digite a prestaçao do imprestimo:\n");
    scanf("%f",&prest_imprest);

    prest_imprest > ((salario*20)/100) ? printf("emprestimo nao consedido") : printf("emprestimo consedido");

    return 0;
}