#include <stdio.h>

void main(){
    union value{
        int x;
        float y;
    };
    union value v;
    v.x = 10;
    v.y = 20.0;
    printf("x and y are %d %f",v.x,v.y);
    printf("\nTotal memory %d",sizeof(v));
}