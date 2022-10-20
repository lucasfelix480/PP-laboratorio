#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    float salario;
   

    printf("digite o salario:");
    scanf("%f",&salario);

    salario=salario+(salario*25/100);

    printf("o salario com aumento de 25%% eh %f",salario);
    return 0;
}