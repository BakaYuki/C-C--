#include<stdio.h>
int is_Palindrome( int );


int main()
{
    int input,reversed=0;
    int x;
    printf( "Input a five-digit number\n" );
    scanf("%d", &input);

    x = input;
    reversed = reversed + (x/10000);
    x = x - ((x / 10000) * 10000);

    reversed = reversed + ((x/1000) * 10 );
    x = x - ((x / 1000) * 1000);
    
    reversed += ((x/100) * 100 );
    x = x - ((x / 100) * 100);
    
    reversed += ((x/10) * 1000 );
    x = x - ((x / 10) * 10);

    printf("\n%d\n",x);
    printf("\n%d\n",reversed);
    reversed += x* 10000 ;
    
    if(reversed == input){
        printf("%d is a palindrome.",input);
    }
    else{
        printf("%d is not a palindrome.",input);
    }

    getch();
}
