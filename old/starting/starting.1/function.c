#include <stdio.h>

//Trying int instead of void to create a  function

int sum(int x, int y){
    int z = 0;
    z = x + y;
    return z;
}

int main(){
    printf("Th Sum is %d \n ",sum(5,3));
    int a,b;
    printf("Please enter 2 numbers \n");
    scanf("%d",&a);
    scanf("%d",&b);
    int customsum = sum(a,b);
    

    printf("Sum of custom variables is: %d \n",customsum);
    return 0;

}

