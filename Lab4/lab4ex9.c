#include<stdio.h>
 

int main(){
int i, num;

    printf( "Digite um numeoro \n");
    scanf("%d",&num);

    for ( i = 1; i <num; i++)
    {
    
        if ( i%2!=0){
            printf("%d\n",i);

        }
    }
}