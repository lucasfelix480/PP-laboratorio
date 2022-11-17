#include<stdio.h>
 

int main(){
int i,soma =0 ;

    
    for ( i = 1; i <=50; i++)
    {       

        
        if (i%2==0){
        
            soma = soma +i;
        }
    }

    printf ("%d",soma);

    return 0;
}