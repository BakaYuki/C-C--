#include <stdio.h>

int main(){
    int n;
    int temp,i = 1,binary=0;
    printf("Enter the binary integer\n");
    scanf("%d",&n);

    while(n>0){
        temp = n % 10;
        binary = binary + ( temp * i);
        i = i * 2;
        n = n/10;
    }

    printf("binary = %d",binary);
    
    getch();
}

