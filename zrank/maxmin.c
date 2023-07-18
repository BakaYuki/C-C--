/*Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Example
arr = [1,3,5,7,9]

The minimum sum is 1+3+5+7 = 16  and the maximum sum is 3+5+7+9 = 24 . The function prints

16 24
*/

#include <stdio.h>

int main(){
    long long arr[5],i,total,max,min,tmax;
    total =0;
    for(i=0;i<5;i++){
        scanf("%lld",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    //printf("%d",max);
    
    for(i=0;i<5;i++){
        total = total + arr[i];
        //printf("%d\n",total);
        if(arr[i] > max){
            max = arr[i];
            //printf("%d\n",max);
            //continue;
        }
        else if(min>arr[i]){
            min = arr[i];
        }
        
    }
    tmax = max;
    max = total - min;
    min = total - tmax;
    printf("%lld %lld",min,max);
}

/*
256741038 
623958417 
467905213 
714532089 
938071625

2063136757 2744467344
*/
