#include <stdio.h>

int main ()
{
    int i,j=0,k=0;

    for ( i = 0; i < 101; i++)
    {
       printf("%d\n",i);
    }
    return 0;
    

    while (j<101)
    {
       printf("%d",j);
       ++j;
    }

    do
    {
       printf("%d",k);
       ++k;
    } while (k<101);
    
    return 0;
}