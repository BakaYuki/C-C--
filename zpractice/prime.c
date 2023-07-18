#include <stdio.h>

int main(){
    int x,i,subekshya=0;
    printf("enter a number");
    scanf("%d",&x);

    for(i = 2; i<x;i++){
        if(x%i ==0){
            subekshya = 1;
            break;
        }

    }
    if(subekshya==0){
        printf("It is prime %d",x);
    }
    else{
        printf("It is not prime %d",x);
    }
}