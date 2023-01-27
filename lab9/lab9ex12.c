#include <stdio.h>

int odernar(int *a, int *b ,int *c){


    int d1,d2,d3;
    d1=*a;
    d2=*b;
    d3=*c;
    
    
    if (*a==*b && *b==*c)
    {
       return 1;

    }
    else{
        if (*a>*b || *a>*c)
        {
        *c=d1;

        }
        if (*b>*c || *b <*a)
        {
        *b=d2;

        }
        if (*c<*b || *a<*c)
        {
        *a=d3;
        }

        printf("%d %d %d",*a,*b,*c);
        return 0;
    }
    
};

int main(){
    int s1,s2,s3;
    int *p,*q,*r;

    scanf("%d\n%d\n%d\n",&s1,&s2,&s3);

    p=s1;
    q=s2;
    r=s3;

    odernar(p,q,r);

    return 0;
}