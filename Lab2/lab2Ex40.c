#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    float HoraTrab=30.00,Salariol,SalarioB;
    int Dias;
   

    printf("Digite o numero de dias trabalhados:\n");
    scanf("%d",&Dias);
    
    SalarioB=HoraTrab*Dias;
    Salariol=SalarioB-(SalarioB*8/100);
   
    printf("O salario liquido eh: %f",Salariol);

    return 0;
}