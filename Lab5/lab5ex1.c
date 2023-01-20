#include<stdio.h>

int dobro(int num){
    return num*2;
}

int main(){

    int a,b;
    scanf("%d",&a);

    b = dobro(a);

    printf("%d", b);

    return 0;


}