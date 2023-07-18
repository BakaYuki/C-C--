#include <stdio.h>

void main(){
    int arr[3][3];
    int (*ptr)[3];
    ptr = arr;

    int count = 0;
    printf("Enter the elements of the array\n");
    for(int i =0; i<3; i++){
        for(int j = 0; j<3; j ++){
            scanf("%d",*(ptr + i )+j);
            if(*(*(ptr+i)+j)<0){
                count++;
            }
        }
    }

    printf("Total neg no. = %d ",count);
    
}