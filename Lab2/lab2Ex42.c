#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    float bonus,SalarioB,salarioTtal,des;
 
    printf("Digite o salario Base:\n");
    scanf("%f",&SalarioB);
   
    bonus=(SalarioB*5)/100;
    des=(SalarioB+bonus)*7/100;

    salarioTtal=(SalarioB+bonus)-des;
    
    printf("%f %f",bonus,des);
   
    printf("O salario liquido eh: %f",salarioTtal);

    return 0;
}    