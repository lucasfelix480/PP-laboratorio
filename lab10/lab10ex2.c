#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p,n,i;

    scanf("%d",&n);

    p = (int *)malloc(n*sizeof(int));

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&p[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d",*(p+i));
    }
    

    free(p);

    return 0;
}