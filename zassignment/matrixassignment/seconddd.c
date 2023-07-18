#include<stdio.h>
#include<conio.h>

#define ROWS 5
#define COLUMNS 5

void main()
{
    int i,j;
    int array[ROWS][COLUMNS];
    
    for(i=0;i<ROWS; i++)
    {
        for(j=0;j<COLUMNS;j++)
        {
            if(i+j == COLUMNS - 1)
                array[i][j]=0;
            else
            {
                if(i+j <COLUMNS - 1){
                    array[i][j]=+1;
                }
                else{ 
                    array[i][j]=-1;
                }
            }
        }
    }
    
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLUMNS; j++)
        {
            if(array[i][j]==1){
                printf("+%-5d", array[i][j]);
            }
            else if(array[i][j]==0){
                printf(" %-5d", array[i][j]);
            }
            else{
                printf("%-6d", array[i][j]);
            }
            
        }
        printf("\n");
    }    
    getch();
}
