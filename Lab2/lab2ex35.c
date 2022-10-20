#include <stdio.h>
#include<math.h>

int main()
{
    float a,b,h;
    
    scanf("%f %f %f",&a,&b,&h);
    h=(pow(a,2)+pow(b,2));
    h=sqrt(h);
    
    printf("%f",h);
    
    

    return 0;
}
