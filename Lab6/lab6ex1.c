#include<stdio.h>

int main (){
    int i ;
    int A[6] = {1,0,5,-2,-5,7};
    int B = A[0]+A[1]+A[5];

    A[4]=100;
    
    for ( i = 0; i <=5; i++)
    {
        printf("%d \n", A[i]);
    }
    
    printf("%d", B);

    return 0;



}