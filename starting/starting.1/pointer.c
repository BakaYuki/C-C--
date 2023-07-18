#include <stdio.h>

void main(){

    int myAge = 21;
    int* ptr = &myAge;

    printf("%d \n",myAge);
    printf("%p \n", &myAge);
    printf("%p \n",ptr);
    printf("%d \n",ptr);
    printf("%d\n", *ptr);
    printf("%p\n", *ptr);
}