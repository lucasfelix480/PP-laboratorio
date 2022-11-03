#include<stdio.h>

int main()
{
    int num1,num2;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d\n",&num1);
    scanf("%d",&num2);

    if (num1>num2)
    {
        
        printf("O mairo numero e %d  e a diferenca entre eles e %d",num1, num1-num2);
    }
    else
    {
       printf("O mairo numero e %d  e a diferenca entre eles e %d",num2, num2-num1);
    }
    
    return 0;   
}