#include<stdio.h>  

int main(){

    int i, soma=0, dado;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o numeoro : ");
        scanf("%d",&dado);
        soma =soma + dado;
        printf("\n");
    }    
    printf("%d",soma);
    return 0;
}