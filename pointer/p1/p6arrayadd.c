#include <stdio.h>
#include <stdlib.h>

#define MAXROWS 20

void readinput(int *a[MAXROWS],int nrows, int ncols);
void computesums(int *a[MAXROWS], int *b[MAXROWS], int *c[MAXROWS], int n, int m);
void writeoutput(int *c[MAXROWS], int nrows, int ncols);

int main(){
    int row,nrows,ncols;
    /*pointer decleration*/
    int *a[MAXROWS], *b[MAXROWS], *c[MAXROWS];
    
    printf("How many rows?\n");
    scanf("%d",&nrows);

    printf("How many columns?\n");
    scanf("%d",&ncols);

    /* allocate initial memory */
    for(row =0; row<nrows;row++){
        a[row] = (int *) malloc (ncols * sizeof(int));
        b[row] = (int *) malloc (ncols * sizeof(int));
        c[row] = (int *) malloc (ncols * sizeof(int));
    }

    printf("\nFirst table:\n");
    readinput(a,nrows,ncols);

    printf("\n\nSecond table:\n");
    readinput(b,nrows,ncols);

    computesums(a,b,c,nrows,ncols);

    printf("\n\nSums of the elements:\n\n");
    writeoutput(c,nrows,ncols);

}

void readinput(int *a[MAXROWS],int m, int n) //read in a table of integers
{
    int row,col;

    for(row = 0; row<m;row++){
        printf("\nEnter data for row no. %2d\n",row+1);
        for(col =0;col<n;col++){
            scanf("%d",(*(a+row)+col));
        }
        return;
    }
}

void computesums(int *a[MAXROWS], int *b[MAXROWS], int *c[MAXROWS], int n, int m)//add the elements of twon integer tables
{
    int row,col;
    for(row = 0; row<m; row++){
        for(col =0;col<n;col++){
            *(*(c+row) + col) = *(*(a + row) + col) + *(*(b+row) + col);
            return;
        }
    }
}

void writeoutput(int *a[MAXROWS],int m, int n) //write out a table of integers
{
    int row,col;
    for(row = 0; row<m; row++){
        fpr(col = 0; col<n; col++){
            printf("%4d",*(*(a + row) + col));
        }
        printf("\n");
    }
    return;
}

