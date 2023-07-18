#include <stdio.h>

int main(){
    int x = 0;
    int y = 1;
    int z;

    int n; // no of terms to print

    printf("Upto how many terms would u like to print the fibonacci series?\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d\t",x);
        z = y+x;
        x = y;
        y = z;
    }
}