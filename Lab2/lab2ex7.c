#include<stdio.h>
#include<math.h>

int main()
{
   float C,F;
   printf("Digite a temperatura em ºF");
   scanf("%f",&F);

   C=5.0*(F-32)/9.0;

   printf("Sua temperatura em Celsius eh: %f C", C);
   return 0;




}
