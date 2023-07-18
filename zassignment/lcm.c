#include<stdio.h>
#include <ctype.h>
int main(){

    int a,b,multiplied,high,low;
    int value=2, count,i,j=0;  //values for prime numbers
    int prime[200],primelen;

    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    multiplied = a;
    if(a>b)
    {
        high =a;
        low =b;
    }
    else if(b>a) 
    {
        high =b;
        low = a;
    }
    else
    {
        goto end;
    }
    multiplied = a * b;

    
    while(value<=low){
        count = 0;
        i=2;
        
        while(i < value){
            if(value % i == 0){ 
                count++;
                break;
            }
            i++;
            
        }
        if(count == 0){
            prime[j]=value;
            j++;
        }
        value++;
    }
    
    //primelen = sizeof(prime)/sizeof(prime[0]);
    
    //printf("%d",j);
    int temp;
    //int k = j-1;
    start:
    //printf("\n Mukesh");
   
    for(i = 0; i<j;i++){
        if(a%prime[i]==0 && b%prime[i]==0){
            temp = multiplied / prime[i];
            if(temp<high){
                goto end;
            }
            multiplied = temp;
            a = a/prime[i];
            b = b/prime[i];
            //printf("The LCM is: %d",multiplied);
            //printf("MP");
            goto start;
        }
    }
    end:
    printf("\nThe LCM is: %d",multiplied);
}