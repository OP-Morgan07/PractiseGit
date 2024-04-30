#include<stdio.h>
#include<stdbool.h>
int SumOfDivisors(int x);
int main(){
	int n;
	printf("ENTER THE FIRST NUMBER : ");
	scanf("%d", &n);
	int m;
	printf("ENTER THE SECOND NUMBER : ");
	scanf("%d", &m);
	bool flag=false;
	int x=SumOfDivisors(n);
	int y=SumOfDivisors(m);
	
	if(x==m && y==n) flag=true;
	
	if(flag==false) printf("THE NUMBERS ARE NOT AMMICABLE");
	else printf("THE NUMBERS ARE AMMICABLE");
	return 0;
}
int SumOfDivisors(int x){
	int f=0;
	for(int i=1; i<=x/2; i++){
		if(x%i==0) f=f+i;
	}
	return f;
}