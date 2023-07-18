#include <stdio.h>
void modify(int *a);

int main(){
    int a =2;
    printf("\na= %d",a);
    modify(&a);
    printf("\na= %d",a);
}

void modify(int *a){
    
    *a *=3;
    printf("\n\na= %d", *a);
    return;
}