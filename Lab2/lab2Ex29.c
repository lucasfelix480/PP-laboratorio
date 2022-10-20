#include <stdio.h>
#include <stdlib.h>


int main()
{
	float n1,n2,n3,n4, media;
    

    printf("digite 4 notas:\n");
    scanf("%f %f %f %f", &n1,&n2,&n3,&n4);

    media= (n1+n2+n3+n4)/4;

    printf("a media das notas eh: %f",media);
   
    return 0;

}