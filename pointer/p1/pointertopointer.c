#include <stdio.h>

int main(){
    int a =9;
    int *p1;
    int **p2;

    int ***p3;
    int *p4;

    p1 = &a;
    p2 = &p1;
    p4 = &p1;
    p3 = &p2;

    *p1 =2;
    **p2 = 4;

    
    printf("p1 =%d p2 =%d p3= %d",*p1,**p2,***p3);
    printf("\n\np4 =%d",*p4);
}