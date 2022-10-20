#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    float p,D;
   

    printf("digite o valor do produto:");
    scanf("%f",&p);

    D=p-(p*12/100);

    printf("o produto com desconto de 12%% eh %f",D);
    return 0;
}