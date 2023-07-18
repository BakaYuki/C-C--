#include <stdio.h>
#include <conio.h>

int main(){
    
    int i, marks[3];

    printf("Enter marks \n");
    for(i = 0; i<3; i++){
        scanf("%d",&marks[i]);
    }

    printf("Middle of Loop \n");
    for (i = 0; i<3; i++){
        printf("%d \n",marks[i]);
    }
    

    printf("End of Loop");
    return 0;

}