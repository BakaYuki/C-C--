#include <stdio.h>

int main(){

    int a,b;

    printf("amount? \n");
    scanf("%d",&b);

    printf("%d \n",b);
    for(a=0;a<b;a++){
        printf("%d \n",a);
    }

    return 0;
}