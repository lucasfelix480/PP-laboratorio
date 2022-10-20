#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,suc,antsuc,soma;

    printf("digite um numero interio:\n");

    scanf("%d",&n);

    suc=n+1;
    antsuc=n-1;
    soma=(3*suc)+(2*antsuc);


    printf("%d",soma);

    return 0;
}