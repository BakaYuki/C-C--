#include<stdio.h>
int fib(int n);
int main(){
	int n,i=0;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("Fibonacci Series of %d terms is: \n",n);
	while(i<n){
		printf("%d \n",fib(i));
		i++;
    }
	return 0;
}
int fib(int n){
	if (n==0){
		return 0;
	}
	else if (n==1){
		return 1;
	}
	else{
	return fib(n-1)+fib(n-2);
	}
}