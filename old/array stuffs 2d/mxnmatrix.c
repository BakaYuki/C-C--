#include <stdio.h>
#include <conio.h>

void main(){
    int a[50][50], m,n,i,j;
    printf("Please enter the order of matrix: ");
    scanf("%d",&m);
    printf(" x ");
    scanf("%d",&n);
    printf("\n You have entered the order of matrx %d x %d \n Please Enter the values of matrix \n",m,n);

    for(i = 0; i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n The Matrix of order %d x %d\n ",m,n);
    for(i = 0; i<m;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d \t",a[i][j]);
        }
    }
}