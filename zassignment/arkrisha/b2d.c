#include <stdio.h>
int main(){
    int binarynumber;
    int temp,x = 1,dec=0;
    printf("Enter the binary integer\n");
    scanf("%d",&binarynumber);

    while(binarynumber>0){
        temp = binarynumber % 10;
        dec = dec + ( temp * x);
        x = x * 2;
        binarynumber = binarynumber / 10;
    }

    printf("binary = %d",dec);
    
    getch();
}

