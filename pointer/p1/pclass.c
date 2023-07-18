#include <stdio.h>

int main(){

    int x,y;
    int *ptr;
    x = 10;
    ptr = &x;
    *ptr = 200;
    y = *ptr;

    //  x = *(&x) = *ptr= y and &x= &*ptr;

    *ptr = 100;

    printf("Value of x = %d\n",x);
    printf("Value of *ptr = %d\n",*ptr);
    printf("Value of y = %d\n",y);
    printf("Value of &x= is %u\n",&x);
    printf("Value of &y = %u\n",&y);
    
    
       
}