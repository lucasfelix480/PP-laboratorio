#include <stdio.h>
#include <stdlib.h>
#include<math.h>


int main()
{
    float raio,h,v;
    float pi=3.141592;
    
    scanf("%f %f", &raio,&h);

    v=pi*(pow(raio,2))*h;

    printf("%f",v);
    

    return 0;
}
