#include <stdio.h>

int isprime(int);


int main(){
    int x,y;
    printf("Enter a number");
    scanf("%d",&x);

    y = isprime(x);

    if(y == 1) printf("It is not prime %d",x);
    else{
        printf("It is a prime %d",x);
    }
}

int isprime(int a){
    int value =0;
    for(int i =2;i<a;i++){
        if(a%i==0){
            value = 1;
            break;
        }
    }
    
    return value;
}