#include<stdio.h>
int main(){
	int n; 
	printf("ENTER A NUMBER: ");
	scanf("%d", &n);
	
	int ld,sum=0;
	while(n!=0){
		ld=n%10;
		n=n/10;
		sum=sum+ld*ld;
		
	}
	printf("The sum of squares of the digits of a number is: %d\n", sum);
	if(sum==n)
	printf("The sum of squares of the digits of the number is equal to the number");
	else
	printf("The sum of squares of the digits of the number is not equal to the number");
	return 0;
}