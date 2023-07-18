//inintialization of pointer

#include <stdio.h>
void funct(int *a, int *b);
void normalfunc(int a, int b);
int main(){

    int *p;      //best way of pointer decleration
    int* ap;     
    int * mp;

    int u = 3;
    int v = 3;

    printf("Before funct u=%d v =%d",u,v);
    
    normalfunc(u,v);
    printf("\nAfter normalfunct u = %d v = %d",u,v);

    
    funct(&u,&v);
    printf("\nAfter funct u = %d v = %d",u,v);
    //  printf("\nAddress of u = %u v = %u",&u,&v);
}

void normalfunc(int a, int b){
    a = 1;
    b = 1;
}
void funct(int *a,int *b){
    *a = 1;
    *b = 1;
}