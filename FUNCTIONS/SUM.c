#include<stdio.h>
int sum(int x, int y){
	return x+y;
}
int main(){
	int x;
	printf("ENTER 1ST NUMBER: ");
	scanf("%d", &x);
	int y;
	printf("ENTER 2ND NUMBER: ");
	scanf("%d", &y);
	printf("Sum of %d and %d is %d", x,y,sum(x,y)); // Or we can also make a variable to store the returned value and the print
	return 0;
}