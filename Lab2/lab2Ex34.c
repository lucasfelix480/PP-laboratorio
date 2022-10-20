#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    float  raio,A;
    float Pi=3.141592;

    printf("digite o valor do raio do circulo:\n");

    scanf("%f",&raio);

    A=Pi*(pow(raio,2));

    printf("%f",A);

    return 0;
}