#include <stdio.h>
#include <conio.h>

void ascending(int list[], int len);
void main(){
    int n;
    int arr[100];
    printf("Enter number of elements \n");
    scanf("%d",&n);
    printf("Enter the numbers \n");
    for(int i =0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    ascending(arr, n);

}

void ascending(int list[],int len){
    int temp;

    for(int i =0;i<len;i++){
        
        for(int j = i+1 ;j<len;j++){
            if(list[i]>list[j]){
                
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
    printf("Ascending order \n");
    for(int i =0;i<len;i++){
        printf("%d\n",list[i]);
    }
}
