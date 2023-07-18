#include <stdio.h>

int main(){
    int a[2] = {2,4};
    int b[2]= {2,5}; 
    int c[2]={2,6};
    int d =3;
    int *p, *q, *r,*s;

    p = &a;
    q = &b;
    r = &c;
    s = &d;

    *p++;
    *(q++);
    (*r)++;
    *s = *s + 10;
    printf("%d %d %d %d",*p,*q,*r,*s);

}