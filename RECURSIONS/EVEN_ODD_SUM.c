#include<stdio.h>
int even(int n,int sum);
int odd(int n,int sum);
int main(){
	int n;
	printf("ENTER A NUMBER : ");
	scanf("%d", &n);
	
	int x= even(n,0);
	int y=odd(n,0);
	if(x==y) printf("THE SUM ARE SAME");
	else printf("NOT SAME");
	return 0;
}
int even(int n,int sum){
	if(n==0) return sum;
	int m;
	 m = n%100;
	m=m/10;
	n=n/100;
	even(n,sum+m);
	

}
int odd(int n,int sum){
	
	if(n==0) return sum;
	int m;
	if(sum==0){
	m= n%10;
		n=n/10;
		odd(n,sum+m);
	}
	else{
		m=n%100;
		m=m/10;
		n=n/100;
		odd(n,sum+m);
	}
	
}