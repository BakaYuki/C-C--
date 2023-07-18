#include <stdio.h>

int main(){
    int x=1;
    int z=0;
    int n;
    scanf("%d",&n);
    again:
        if(x<=n){
            z = z + (2*x -1);          //2n-1
            x++;
            goto again;
        }
    printf("%d",z);
}