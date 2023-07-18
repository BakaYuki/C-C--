#include <stdio.h>

float average(float,float,float);

int main(){
    float x=2.2,y=3.2,z=5.2;
    float res = average(x,y,z);
    printf("%f",res);
}

float average(float a,float b, float c){
    float e = (a+b+c)/3;
    return e;
}