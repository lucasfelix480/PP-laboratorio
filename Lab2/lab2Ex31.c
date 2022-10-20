#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,suc,antsuc;

    printf("digite um numero interio:\n");

    scanf("%d",&n);

    suc=n+1;
    antsuc=n-1;

    printf("o numero antessesor de %d eh %d e seu sucessor eh %d",n,antsuc,suc);

    return 0;
}