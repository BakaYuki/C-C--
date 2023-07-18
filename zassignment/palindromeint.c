#include <stdio.h>

int main(){

    int num,num2,reverse=0;

    printf("Enter a 5 digit integer to check if it is a palindrome or not\n");
    scanf("%d",&num);

    num2 = num;

    while(num2>=1){
        reverse = (reverse * 10) + (num2%10);
        num2 = num2/10;
    }
    //printf("\n%d",reverse);
    if(reverse == num){
        printf("The number: %d is a Palindrome.",num);
    }
    else{
        printf("The number: %d is not a Palindrome.",num);
    }

    getch();
}