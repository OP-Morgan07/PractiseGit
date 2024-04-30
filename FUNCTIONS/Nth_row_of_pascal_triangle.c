#include<stdio.h>
int fact(int x){
	int f=1;
	for(int i=1; i<=x; i++){
		f=f*i;
	}
	return f;
	
}
int ncr(int i,int k){
	return fact(i)/(fact(i-k)*fact(k));
}
int main(){
	int n;
	printf("ENTER THE ROW NUMBER : ");
	scanf("%d", &n);
	
	for(int i=0 ;i<=n-1; i++){
	
		printf("%d ", ncr(n-1,i));
		
	}
	return 0;
}