#include<stdio.h>
#include<math.h>

float hipotenusa(float a,float b){
    float hipo;
    if (a>0 && b>0)
    {
        hipo= sqrt(pow(a,2)+pow(b,2));
    }

    return hipo;
};

