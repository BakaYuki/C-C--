#include<stdio.h>

int main(){
     int arr[3][3];
     int (*ptr)[3];
     ptr=arr;
     int sum=0;
      printf("Enter the elements in array");
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",*(ptr + i) +j);
        }
    }
    int a=0;
    for(int i=0;i<3;i++){
       sum=sum+ *(*(ptr+i)+a);
       a++;
    }
    printf("SUm of diagonal=%d",sum);
     return 0;
}