/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
int Sum(int,int);
int multiply(int,int);
void main()
{
    int choice,i,a,b,c;
    do
    {
        printf("1. Sum\n");
        printf("2. multiplication\n");
        printf("3. exit\n");
        printf("Enter choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter two no.\n");
            scanf("%d%d",&a,&b);
            c= Sum (a,b);
            printf("Sum=%d\n",c);
            break;
            
            case 2:
            printf("Enter two no.\n");
            scanf("%d%d",&a,&b);
            c= multiply(a,b);
            printf("product=%d\n",c);
            break;
            
            default:
            printf("You have exited the program");
            
        }
    } while(choice !=3);
}
 int Sum(int a,int b)
 {
     return(a+b);
 }
   int multiply(int a,int b)
   {
     return(a*b);
   }
