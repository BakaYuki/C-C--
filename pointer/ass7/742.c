#include<stdio.h>
#include<stdlib.h>
int main(){
   int *p,n;
   int sum=0;
   float avg;
   int i;
   p=(int *)malloc(sizeof(int)*n);
   printf("Enter how mnay numbers");
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d",(p+i));
   }
   for(i=0;i<n;i++){
      sum=sum+*(p+i);
   }
   avg=(float)sum/n;
   printf("The sum and average is %d %f",sum,avg);
    
    return 0;
}