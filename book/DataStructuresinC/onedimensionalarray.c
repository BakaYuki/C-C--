#include <stdio.h>
void main(){
    int x = 6;
    printf("%d \n",x);
    funct(&x);
    printf("%d\n",x);


}

void funct(int y)
{
    ++y;
    printf("%d\n",y);
}