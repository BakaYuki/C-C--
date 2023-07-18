
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    char name[20],opt;
    int num;
    again:
    srand(time(NULL));
    printf("Enter your name: \n");
    scanf("%s",&name);
    printf("Generating Random Number\n");

    num = 1 + rand()%3;
    printf("%d\n",num);
    printf("%s : %d ",name,num);
    printf("\nRoll again?\n");
    scanf(" %c",&opt);
    if(opt == 'y'){
        goto again;
    }
}