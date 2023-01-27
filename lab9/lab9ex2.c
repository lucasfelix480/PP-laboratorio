#include <stdio.h>

int main(){
    int a,b;

    printf("%d   %d\n",&a,&b);

    if(&a>&b){
        printf("o endereco de a eh: %d",&a);

    }
    else{
        printf("o endereco de b eh: %d",&b);
    }

    return 0;
}