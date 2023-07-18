#include <stdio.h>
#define INTEL

int main(){

    #ifdef INTEL
        printf("Intel has been predefined \n");
    
    #else
        printf("This is Apple \n");
    
    #endif
        printf("This runs no matter what \nI am the king AMD");
}