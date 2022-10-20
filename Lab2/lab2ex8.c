#include<stdio.h>
#include<math.h>

int main()
{
   float C,K;
   printf("Digite a temperatura em ºK");
   scanf("%f",K);

   C=K-273.15;

   printf("Sua temperatura em Celsius eh: %f C", C);
   return 0;


}
