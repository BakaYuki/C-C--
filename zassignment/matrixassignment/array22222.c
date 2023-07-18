#include<stdio.h>
#include<conio.h>

#define ROW 5
#define COLUMN 5

int main()
{
    int array[ROW][COLUMN];

    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COLUMN; j++)
        {
            if(i + j == COLUMN - 1)
                array[i][j] = 0;
            else if(i + j < COLUMN - 1)
                array[i][j] = 1;
            else
                array[i][j] = -1;
        }
    }

    /* Displaying actual matrix */
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COLUMN; j++)
        {
            array[i][j] == 0 ? printf(" %-5d", array[i][j]) : array[i][j] == 1 ? printf("+%-5d", array[i][j]) : printf("%-6d", array[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}