
#include<stdio.h>

int main(){
     int arr[3][3];
     int (*ptr)[3];
     ptr=arr;
     int sum=0;
     printf("Enter the elements in array");
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
         
     }
     
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
            sum = sum + *(*(ptr+i)+j);
            
        }
        printf("\n");
            
     }
     printf("The sum of elements of array is %d",sum);
     return 0;
}