#include <stdio.h>
int power(int a, int b){
	if(b==0) return 1;
	int x= a* power(a, b-1);
	return x;
}
int main(){
	int a;
	printf("ENTER THE VALUE OF BASE: ");
	scanf("%d", &a);
	int b;
	printf("ENTER THE VALUE OF EXPONENT: ");
	scanf("%d", &b);
	
	int x=power(a,b);
	printf("%d", x);
	return 0;
}