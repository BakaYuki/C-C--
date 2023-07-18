#include<stdio.h>
#include<conio.h>

#define ROWS 5
#define COLUMNS 5

void main()
{
    int i,j;
    int array[ROWS][COLUMNS];
    for(i = 0;i<ROWS; i++)
    {
        for(j=0;j<COLUMNS; j++)
        {
            if(i==j)
                array[i][j]=1;
                
            else
                array[i][j]=0;
        }
    }

    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLUMNS; j++)
        {
            printf("%-5d", array[i][j]);
        }
        printf("\n");
    }
    getch();
}
