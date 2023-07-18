#include <stdio.h>
/*Staircase detail

This is a staircase of size : 4

   #
  ##
 ###
####
Its base and height are both equal to . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size .
*/

void stairs();

int main(){
    int i,n,a,b,c;
    printf("Enter the number of stairs");
    scanf("%d",&n);
    
    a = n;
    b = a;
    while(n>0){
        i = n-1;
        
        for(i;i>0;i--){
            printf(" ");
        }
        for(a;a>=n;a--){
            if(a==n){
                printf("#\n");
            }
            else{
                printf("#");
            }
        }
        n--;
        a = b;
    }
}