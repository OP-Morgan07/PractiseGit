#include<stdio.h>
int main(){
	int x;
	printf("ENTER 1ST NUMBER: ");
	scanf("%d", &x);
	int y;
	printf("ENTER 2ND NUMBER: ");
	scanf("%d", &y);
	//swapping without third variable
	printf("%d %d\n", x,y);
	x=x+y;
	y=x-y;              //Without third variable method
	x=x-y;
	printf("%d %d", x,y);
	return 0;
}