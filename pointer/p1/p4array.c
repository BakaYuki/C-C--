#include <stdio.h>

int main(){
    int *px, *py;
    static int a[6]={1,8,3,4,5,6};

    px = &a[1];
    py = px +2;
    (*px)++;
    printf("px = %u py=%u",px,py);

    printf("\n*px =%d  *py=%d",*px,*py);


}