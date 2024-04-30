#include<stdio.h>
//new concept multiple calls of same function
int fibo(int n){
	if(n==1 || n==2) return 1;
	int x=fibo(n-1) + fibo(n-2);  //Working of multiple call functions is very important. They operate one by one.
	return x;
	
}
int main(){
	int n;
	printf("ENTER THE VALUE OF n: ");
	scanf("%d", &n);
	
	int x=fibo(n);
	printf("%d", x);
	return 0;
}