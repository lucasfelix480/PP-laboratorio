#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    float ValoHoraTrab,SalarioB;
    int horastraba;
   

    
    printf("Digite o numero de horas trabalhas:\n");
    scanf("%d",&horastraba);
    printf("Digite o valor da hora trabalhada:\n");
    scanf("%f",&ValoHoraTrab);
    
    SalarioB=ValoHoraTrab*horastraba;
    SalarioB=(SalarioB*10/100)+SalarioB;
    
   
    printf("O salario liquido eh: %f",SalarioB);

    return 0;
}