#include <stdio.h>

int fact(int a);

main(){
    int i,n,y;

    printf("Enter the number n ");
    scanf("%d",&n);
    y = fact(n);
    printf("The fact is %d",y);

}

int fact(int a){

    int f = 1;
    if(a<=0){
        return(f);
    }
    else
        f = a*fact(a-1);
        printf("a ");
        return (f);
}