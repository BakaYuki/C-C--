#include <stdio.h>
#include <conio.h>

int main(){
    int num[20], n, i,j, largest;

    printf("How many numbers are there? \n");
    scanf("%d",&n);

    printf("Enter the numbers \n");

    for(i = 0; i<n; i++){
        scanf("%d",&num[i]);
    }

    for(i = 0; i<n; i++){
        for (j = i+1; j<n; j++){
            if(num[i]>num[j]){
                largest = num[j];
                num[j] = num [i];
                num[i] = largest;
            }
        }
    }

    printf(" \n The Largest number is: %d",num[n-1]);
}

/*

5 25 */