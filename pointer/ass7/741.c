#include <stdio.h>
#include <stdlib.h>


void ascending(int *,int);

void main(){
    int *ptr;
    int n;
    printf("Enter the total number of integers\n");
    scanf("%d",&n);
    ptr = (int *) malloc (n * (sizeof(int)));
    printf("Enter the %d numbers\n",n);
    
    for(int i =0;i <n;i++)=
        scanf("%d",(ptr+i));
    }
    
    ascending(ptr,n);
    for(int i =0;i <n;i++){
        printf("%d\n",*(ptr+i));
    }

}

void ascending(int *p, int len){
    int temp;
    for(int i=0;i<(len-1);i++){
        for(int j = i+1; j <len; j++){
            if(*(p+i)>*(p+j)){
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
    
}

void sumandaverage(int *s,int len){
    int sum = 0;
    for(int i =0;i<len;i++){
        sum = sum + *(s+i);
    }
    printf("The sum is: %d\n",sum);
    float average = (float) sum / len;
    printf("The average is %f",average);
}