#include<stdio.h>
#include<conio.h>

#define ROW 5
#define COLUMN 5

int main()
{
    int arr[ROW][COLUMN];

    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COLUMN; j++)
        {
            if(i == j)
                arr[i][j] = 1;
            else
                arr[i][j] = 0;
        }
    }

    /* Displaying actual matrix */
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COLUMN; j++)
        {
            printf("%-5d", arr[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}