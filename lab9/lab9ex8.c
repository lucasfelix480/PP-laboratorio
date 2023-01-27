#include<stdio.h>

int main(){
    float A[10];
    float *p;
    int i;

    p=A;

   

    for ( i = 0; i < 2; i++)
    {
        printf("o endereço de A na posicao %d eh: %f\n",i,p++);
    }
    
    return 0;
}