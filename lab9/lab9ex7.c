#include<stdio.h>

void soma(int *A,int *B){

    int d1,d2,resul;

    d1=*A;
    d2=*B;
    resul=d1+d2;
    *A=resul;


};

int main(){

    int a ,b;
    int *p,*q;

    scanf("%d\n%d",&a,&b);
    p=&a;
    q=&b;

    soma(p,q);

    printf("%d,%d",a,b);

    return 0;
}