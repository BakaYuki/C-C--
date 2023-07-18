#include<stdio.h>

int main(){
    int n,temp;
    int a[100];
    printf("ENter no");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n;j++){
            if(a[i]>a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
         }
      }
    }
    printf("Ascending order");
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    
    return 0;
}