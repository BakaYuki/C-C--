#include <stdio.h>
#include <conio.h>
#include <string.h>

void smallest (int lists[], int lens);
void ascending(int list[], int len);
void main(){
    int n;
    int arr[100];
    printf("Enter number of elements \n");
    scanf("%d",&n);
    printf("Enter the numbers \n");
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    smallest(arr,n);
    //ascending(arr, n);

}

void smallest(int list[], int len){
    int small;
    small = list[0];
    for(int i =0; i<len ; i++){
        if(small>list[i]){
            small = list[i];
        }
    }
    printf("The smallest is %d",small);
}


/*
void ascending(int list[],int len){
    int temp;
    
    len = len -1;
    printf("%d",len);
    for(int i =0;i<len;i++){
        printf("a");
        for(int j = i+1 ;j<len;j++){
            if(list[i]>list[j]){
                printf("a");
                temp = list[i];
                list[i] = list[j];
                list[j] = list[i];
            }
        }
    }
    printf("Ascending order \n");
    for(int i =0;i<len;i++){
        printf("%d\n",list[i]);
    }
}
*/