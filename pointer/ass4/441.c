#include <stdio.h>

void main(){
    long long int fact = 1;
    for (int i =1; i<16;i++){
        fact = fact * i;
    }
    printf("%d",fact);
}