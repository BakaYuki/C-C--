#include <stdio.h>

struct complex{
    float real;
    float imag;
};
void multy(struct complex , struct complex);

void main(){
    struct complex x,y;
    printf("Enter values of first complex number\n");
    scanf("%f %f",&x.real,&x.imag);
    printf("Enter second complex number\n");
    scanf("%f %f",&y.real,&y.imag);
    multy(x,y);
}

void multy(struct complex a, struct complex b){
    struct complex mul;
    mul.real = (a.real* b.real) - (a.imag * b.imag);
    mul.imag = (a.real * b.real) + (a.imag * b.imag);
    printf("\nMultiplied Complex no: %f %f",mul.real,mul.imag);
}