#include<stdio.h>

int main(){
    
    float n1,n2,med;

    printf("digite a suas notas : \n");
    scanf( " %f %f", &n1,&n2);

    if ( (n1>= 0.0 && n1 <=10.00) && (n2>= 0.0 && n2 <=10.0) ){

        med = ((n1+n2)/2);
        printf(" a media das motas eh:%.1f",med);
    }
    else{
        printf("as notas nao sao validas");
    }

    return 0;
}