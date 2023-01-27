#include <stdio.h>


int main(){
    int a, b;

    scanf("%d\n%d",&a,&b);

    if (&a>&b)
    {
        printf("o valor de A eh:%d",a);
    }
    else{
        printf("o valor de B eh:%d",b);
    }


    return 0;
}