#include <stdio.h>
#include <conio.h>

int main(){

    int arr[2][3] = {{12,21,34},{56,32,64}};

    int i, j;
    for(i=0; i<2;i++){
        printf("\n");
        for(j=0 ; j <3;j++){
            printf("%d \t",arr[i][j]);
        }
    }
    printf(" \n Try outs \n");
    printf("%d",arr[0][0]);
    
    int array[3] = {1,2,3};
    printf("\n %d",array[1]);
    return 0;

}