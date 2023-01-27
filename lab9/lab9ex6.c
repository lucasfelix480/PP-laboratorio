#include<stdio.h>

void somaDobro(int *a,int *b){

    int p,q;
    *a= (*a)*2;

    *b=(*b)*2;

    p=*a;
    q=*b;

    return printf(" soma eh:%d",p+q);
};

int main(){

    int A,B;
    int *p ,*q;

    scanf("%d\n%d",&A,&B);

    p=&A;
    q=&B;

    somaDobro(p,q);

    


    return 0;

}