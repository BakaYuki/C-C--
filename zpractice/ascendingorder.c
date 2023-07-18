#include <stdio.h>
#include <conio.h>

int main(){
    
    int order[100], n , i, j, temp;

    printf("How many numbers are there? \n");
    scanf("%d",&n);

    printf("\n Enter the numbers \n");
    for(i=0; i<n; i++){
        scanf(" \n %d",&order[i]);
    }

    printf("Numbers before management: \n");

    for(i=0; i<n; i++){
        printf("%d ",order[i]);
    }

    for(i = 0; i<n ; i++){
        for (j = i+1; j<n; j++){
            if(order[i]>order[j]){
                temp = order[i];
                order[i] = order[j];
                order[j] = temp;
            }
        }
    }
    printf(" \nThe Numbers in ascending order are: \n");

    for(i=0; i<n; i++){
        printf("%d ",order[i]);
    }
}