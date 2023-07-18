#include <stdio.h>
#include <conio.h>

int main(){

    int n, i;
    char family[10][10];

    printf("Enter the number of family members \n");
    scanf("%d",&n);

    for(i =1; i<=n; i++){
        printf("Please Enter the name of your family members \n %d : ",i);
        scanf("%s",family[i]);
    }
    
    printf("\n Your family members are ");

    for (i = 1; i<=n; i++){
        printf(" \n %d : %s",i,family[i]);
    }
}