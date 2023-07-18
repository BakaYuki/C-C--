#include <stdio.h>

void hell0(){
    printf("Hello This is my first try on a function \n ");

}

void sum(int x, int y){
    int z =0;
    z = x + y;
    printf("Sum is %d",z);
}
int main(){
    hell0();
    sum(10,4);
    return 0;

}