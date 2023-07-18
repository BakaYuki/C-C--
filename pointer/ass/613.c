#include <stdio.h>
#include <string.h>

int main(){
    int i,j,n;
    char name[50][50];
    char s[50];
    printf("Enter number of names: \n");
    scanf("%d",&n);
    printf("Enter names in any order: \n");
    for(i =0;i<n;i++){
        scanf("%s",&name[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(s,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],s);;
            }
        }
    }
    printf("In sorted form is \n");
    for(i=0;i<n;i++){
        printf("%s\n",name[i]);
    }
}