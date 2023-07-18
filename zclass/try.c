#include <stdio.h>

int main(){
    
    {
        
int a = 0, copya = 0, b = 0;
printf("input a..."); scanf("%d",&a);
copya = a;

do{
b = (b * 10) + (copya % 10);
copya /= 10;
}while(copya >= 1);

printf("b = %d\n", b);
if(b == a) printf("palindrome");
else printf("not palindrome");
  /*
    int x = 12345;
    int y = x % 10;
    printf("%d",y);
    */
}
    /*
    int x,y,z;
    x = 9;
    y = 3;
    z = x %y;
    printf("%d",z);
    start:
    printf("In start");
    if(x==2){
        goto extra;
    }
    end:
    printf("In end");

    extra:
    printf("In extra");
    */
}