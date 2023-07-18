#include <stdio.h>

int main(){
    int a,b,c,d;
    a = 2;
    d = 2;
    b = a++;
    c = ++d;

    printf("%d %d",b,c);
}