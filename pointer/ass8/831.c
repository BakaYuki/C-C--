#include <stdio.h>

void main(){
    struct sample{
        int x;
        int y;
        int z;
    };
    struct sample *p;
    printf("Enter value for x and y \n");
    scanf("%d %d",&p->x,&p->y);
    p->z = p->x + p->y;
    printf("The sum is %d",p->z);
}