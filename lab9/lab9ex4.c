#include <stdio.h>

int troca_de_valor(int *A, int *B){

    int p;
    
    p=*A;

    *A=*B;

    *B=p;
    


    return printf("%d %d",*A,*B);


};

int main(){

    int *p, *q;
    int a,b;

    scanf("%d\n%d",&a,&b);
    p=&a;
    q=&b;
    
    printf("%d %d",*p,*q);
    troca_de_valor(p,q);


    return 0;
}