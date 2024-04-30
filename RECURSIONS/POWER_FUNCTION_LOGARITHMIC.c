#include<stdio.h>
//Logarithmic method to find power function
int powerlog(int a, int b){
	if(b==0) return 1;
	
	
	if(b%2==0)
	return powerlog(a,b/2) * powerlog(a,b/2);
	else
	return powerlog(a,b/2) * powerlog(a,b/2)* a;
}
int main(){
	int a;
	printf("ENTER THE VALUE OF BASE: ");
	scanf("%d", &a);
	int b;
	printf("ENTER THE VALUE OF POWER: ");
	scanf("%d", &b);
	
	int x=powerlog(a,b);
	printf("%d", x);
	return 0;
}