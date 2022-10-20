#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a,m2;
	
	printf(" Digite o valor em metros quadrados para conversao  : \n");
	scanf("%f",&m2);
	
    a=m2*0.000247;
	
	printf("A sua area convertida em acres eh: %.2f" ,a);
	
	return 0;
}