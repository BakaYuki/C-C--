#include <stdio.h>

int main(){

    int quantity = 2;
    int *p;
    p = &quantity;

    int *a = &quantity;

    int *c;
    *c = &quantity;  //this is wrong

    printf("%d %d %d",*p,*a,*c);
}