#include <stdio.h>
#include <stdlib.h>

int main()
{
	float C,P;
	
	printf(" Digite a suas polegadas para conversao: \n");
	scanf("%f",&P);
	
	C = P*2.54;
	
	printf("sua conversao em cm eh: %f" , C);
	
	return 0;
}
