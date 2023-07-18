#include <stdio.h>
#include <conio.h>

void main(){
    int a[50][50], i,j, m,n,sum=0;

    printf("Please Enter the order of Matrix: \n");
    scanf("%d  %d",&m,&n);
    printf("You have entered the matrix of order %d x %d \n Please Enter the elements of matrix in order\n",m,n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }  

    printf("The Matrix you have enetered: ");
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d \t",a[i][j]);

            sum = sum + a[i][j];
        }
    }
    printf("\n The Sum of all elements: %d",sum);

}