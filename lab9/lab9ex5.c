#include<stdio.h>

void troca_de_valores(int *p,int *q){

    int a;

    if(*p>*q){
        printf("%d e %d",*p,*q);
    }
    else{
        a=*p;
        *p=*q;
        *q=a;

        printf("%d e %d",*p,*q);
    }
};

int main(){

    int *a,*b;

    int d1,d2;

    scanf("%d\n%d",&d1,&d2);

    printf("%d %d",d1,d2);

    a=&d1;
    b=&d2;
    troca_de_valores(a,b);


    return 0;
}