#include <stdio.h>
#include <string.h>
 
 int main(){
    char st[100];
    char temp[100];
    int j=1;
    int k=0;
    char stri[100];
    printf("Enter the string\n");
    scanf("%s",&st);

    printf("%d\n",strlen(st));
    for(int i=0; st[i]!='\0';i++){
        
        if(st[i]==st[j]){
            i++;
            j=j+2;
            continue;
        }
        printf("%d",k);
        temp[k]=st[i];
        printf("%c",temp[k]);
        j++;
        k++;
    }
    printf("\nLength of temp = %d\n",strlen(temp));
    for(int i=0;i<strlen(temp);i++){
        stri[i]=temp[i];
    }
    printf("%s",stri);
 }