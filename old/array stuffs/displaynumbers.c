#include <stdio.h>
#include <conio.h>
int main(){

    int array[20], n, i;

    printf("\nEnter the Number of elements \n");
    scanf("%d",&n);

    for(i=0;i<n;i++){

        printf(" Please enter the number in position %d \n",i);
        scanf("%d",&array[i]);

    }

    printf("The Elements are: \n");

    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    return 0;
}