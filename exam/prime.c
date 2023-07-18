#include <stdio.h>

void main(){
    int low=3,n;
    printf("Enter first n prime numbers\n");
    scanf("%d",&n);
    printf("2\n");
    for(int i = 2; i<=n;){
        int flag = 0;
        for(int x = 2;x<low;x++){
            if(low%x ==0){
                flag = 1;
            }
        }
        if(flag == 0){
            printf("%d\n",low);
            i++;
        }
        low++;
    }
}
