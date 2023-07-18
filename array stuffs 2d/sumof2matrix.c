#include <stdio.h>
#include <conio.h>

void main(){
    int a[50][50],b[50][50], i,j,k,c[50][50],m,n;

    printf("Enter the order of matrices: \n");
    scanf("%d %d",&m,&n);

    printf("Order of matrix A : %d x %d \nPlease Enter the elements of the matrix \n ",m,n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter the elements of matrix B: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]= a[i][j] + b[i][j];
        }
    }

    printf("Matrix A: ");
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d \t",a[i][j]);
        }
    }

    printf("\nMatrix B:");
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d \t",b[i][j]);
        }
    }

    printf("\n \nSum of Matrix A and Matrix B: ");
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("%d \t",c[i][j]);
        }
    }

}