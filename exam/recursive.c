#include <stdio.h>
int fact(int);
void main(){
    int n;
    scanf("%d",&n);
    int t;
    t = fact(n);
    printf("value = %d",t);
}

int fact(int a){
    int f = 1;
    if(a<=1){
        return f;
    }
    else{
        f = a * fact(a-1);
        return f;
    }
}