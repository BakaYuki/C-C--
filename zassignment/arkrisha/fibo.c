#include <stdio.h>

int main(){
    int a = 0;  //first term 
    int b = 1;  // second term
    int temp,n; 

    printf("Enter the numbers of terms to print\n");
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d   ",a);
        temp = a+b;
        a = b;
        b = temp;
    }
}