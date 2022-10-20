#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    float premio =780.000;
    float a,b,c;
   

    printf("o valor do premio de cada canhador eh:\n");
    
    a=premio*46/100;

    b=premio*32/100;

    c=premio-a-b;

    printf("R$%.3f \nR$%.3f \nR$%.3f" ,a ,b,c);

    return 0;
}