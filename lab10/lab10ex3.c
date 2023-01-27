#include<stdio.h>
#include<stdlib.h>


int main(){


    int *p,i,n;
    int par =0,impar=0;

    scanf("%d",&n);

    p= (int *)malloc(n*sizeof(int));

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&p[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if(p[i]%2==0){
            par++;
        }
        else{
            impar++;
        }
    }
    printf("numeros impar: %d\n numeros par:%d", impar, par);

    free(p);

    return 0;
}