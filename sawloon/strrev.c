#include <stdio.h>

void main(){
    char str[100];
    printf("Enter a string \n");
    scanf("%s",str);
    int i=0,count=0,mid;

    while(str[i]!='\0'){
        count++;
        i++;
    }

    if (count %2 ==0){
        mid = count/2;
    }
    else{
        count--;
        mid = count/2;
        count ++;
    }
    count--;
    char temp;
    for(i=0;i<mid;i++){
        temp = str[i];
        str[i]=str[count];
        str[count] = temp;
        count--;
    }
    printf("\n\nreveresed = %s",str);
}