#include <stdio.h>

void main(){
    int a = 5;
    int b;
    b = ++a + a++;
    printf("%d",b);
}