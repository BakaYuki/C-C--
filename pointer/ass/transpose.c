#include <stdio.h>
#include <conio.h>

int main(){

    int a[3][4];
    int b[3][4];
    for(int i = 0;i<3;i++){
        for(int j = 0; j<4;j++){
            printf("Enter elements for a[%d][%d]\n",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }/*
    for(int i = 0;i<3;i++){
        for(int j = 0; j<4;j++){
            printf("Enter elements for b[%d][%d]\n",i,j);
            scanf("%d",&b[i][j]);
        }
    }*/
    printf("\nThe matrix a is : \n");
        for(int i = 0;i<3;i++){
            for(int j = 0; j<4;j++){
                printf("%4d",a[i][j]);    
        }
        printf("\n");
    }

    printf("The transpose of matrix a is: \n");
        for(int i = 0;i<4;i++){
            for(int j = 0; j<3;j++){
                printf("%4d",a[j][i]);
            }
            printf("\n");
        }
}