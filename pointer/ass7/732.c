#include <stdio.h>

void largest(int (*large)[3]);

void main(){
    int arr[3][3];
    int (*ptr)[3];
    ptr = arr;
    printf("Enter the elements \n");
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            scanf("%d", (*(ptr + i) + j));
        }
    }
    largest(ptr);


}

void largest( int (*large)[3]){
    int largest = *(*(large));
    
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            if(largest< *(*(large + i)+j)){
                largest = (int)*(*(large + i)+j);
            }
        }
    }
    printf("The largest number is %d",largest);
}