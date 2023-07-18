#include <stdio.h>

void main(){
    struct value{
        int x;
        float y;
    };
    struct value v;
    v.x = 10;
    v.y = 20.0;
    printf("x and y are %d %f",v.x,v.y);
    printf("\nTotal memory %d",sizeof(v));
}