#include<stdio.h>
void fibo(int n,int a,int b);
int main(){
	int n;
	printf("ENTER THE VALUE OF n: ");
	scanf("%d", &n);
	int a=0;
	int b=1;
	printf("%d", a);
	fibo(n,a,b);
	return 0;
}
void fibo(int n,int a,int b){
	if(n<2) return ;
	printf(" %d",b);
    fibo(n-1,b,b+a);
	
    return;
    
}