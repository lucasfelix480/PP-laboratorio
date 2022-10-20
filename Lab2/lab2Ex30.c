#include <stdio.h>
#include <stdlib.h>


int main()
{
    float R,Cot,D;

    printf("Digite o valor em real: \n");
    scanf("%f",&R);

    printf("Digite o valor da cotacao do dolar \n");
    scanf("%f",&Cot);

    D= R/Cot;

    printf("o valor em dolares eh R$ %.2f",D);

    return 0;

}