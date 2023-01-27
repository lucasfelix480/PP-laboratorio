#include<stdio.h>

int main(){
    int A[5];
    int *p;
    int i;

    p=A;

   for ( i = 0; i < 5; i++)
   {
     scanf("%d",&A[i]);
   }
   
   
   {
     for ( i = 0; i < 5; i++)
     {
        if (A[i]%2==0)
        {
            printf("posicao %d endereco %d\n ",*(p+i),(p+i));
        }
        
     }
     
   }
   
    
    return 0;
}