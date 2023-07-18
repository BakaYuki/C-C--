#include <stdio.h>

int main(){

    int hcf,a,b,lowvalue;

    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);

    if(a>b){
        lowvalue = b;
    }
    else{
        lowvalue = a;
    }
    for (int i = 1; i<lowvalue ;i++){
        if(a%i == 0 && b%i == 0){
            hcf = i;
        }
    }

    printf("The HCF is:%d",hcf);

    getch();
}