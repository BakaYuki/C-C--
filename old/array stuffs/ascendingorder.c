#include <stdio.h>

int main(){

    int a, b, c, n;

    printf("How many numbers are there?");
    scanf("%d", &n);
    
    int num[n];
    printf("Enter the numbers \n");
    for(a =0;a<n;a++){
       // printf("%d",a);
        scanf(" \n %d",&num[a]);
        //printf("%d",num[a]);
    }

    for ( a=0;a<n;a++){
        for(b = a+1; b<n; b++){
            if(num[a]>num[b]){

                c = num[a];
                num[a] = num[b];
                num[b] = c;

            }
        }
    }

    for(a=0;a<n;a++){
        printf("%d \n",num[a]);
    }

    return 0;
}