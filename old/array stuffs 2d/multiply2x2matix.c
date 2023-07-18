#include <stdio.h>
#include <conio.h>

void main(){
    int a[3][3],b[3][3],c[3][3],i,j;

    printf("Enter elements of Matrix A: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of Matrix B: \n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]= a[i][0]* b[0][j] + a[i][1]*b[1][j] + a[i][2] * b[2][j];
        }
    }

    printf("The Sum of Matrix = ");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d \t",c[i][j]);
        }
    }
}