#include<stdio.h>

int main(){
    float A[3][3];
    float *p;
    int i,j;

    p=A;

   

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("o endereço de A na posicao %d%d eh: %f\n",i,j,p++);
        }
        
        
    }
    
    return 0;
}