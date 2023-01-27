#include <stdio.h>

int main(){
    int a, *ap;
    float b,*bp;
    char c,*cp;

    a = 10;
    b = 20.22;
    c = 'a';

    ap=&a;
    bp=&b;
    cp=&c;

    printf("%d %f %c",*ap,*bp,*cp);

    *ap = 20;
    *bp = 30.55;
    *cp = 'b';

    printf("%d %f %c",*ap,*bp,*cp);


    return 0;
}