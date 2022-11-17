#include<stdio.h>

int main(){

    int i, soma=0, dado, med;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o valor : ");
        scanf("%d",&dado);
        soma = soma + dado;
    }
    
    med= soma/10;

    printf("A media dos valores e :%d ", med);
    return 0;
}