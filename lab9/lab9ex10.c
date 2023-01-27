#include<stdio.h>


int main(){

    int vet[5];
    int i,*p;



    p=vet;

    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&vet[i]);
    }
    

    for ( i = 0; i < 5; i++)

    {
    
        printf("%d\n",*(p+i)*2);
    }
    

    return 0;
}