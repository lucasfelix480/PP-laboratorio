#include <stdio.h>
#include <stdlib.h>

int main()
{
	float C,P;
	
	printf(" Digite a seus cms para conversao: \n");
	scanf("%f",&C);
	
	P = C/2.54;
	
	printf("sua conversao em polegadas eh: %f" , P);
	
	return 0;
}
