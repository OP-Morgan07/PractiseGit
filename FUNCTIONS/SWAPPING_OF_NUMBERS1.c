#include<stdio.h>
int main(){
	int x;
	printf("ENTER 1ST NUMBER: ");
	scanf("%d", &x);
	int y;
	printf("ENTER 2ND NUMBER: ");
	scanf("%d", &y);
	//swapping
	printf("%d %d\n", x,y);
	int temp=x;                 //Third variable method
	x=y;
	y=temp;
	printf("%d %d", x,y);
	return 0;
}