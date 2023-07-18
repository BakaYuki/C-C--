#include <stdio.h>

int main(){
    int a,b, *p1, *p2,x,y,z;

    a = 2;
    b= 4;

    p1 = &a;
    p2 = &b;

    x = *p1 * *p2 -6;
    printf("%d",x);
    
}