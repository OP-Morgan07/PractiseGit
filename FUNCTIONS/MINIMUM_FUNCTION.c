#include<stdio.h>
int MIN(int x, int y){          //int is the return type as we have to return the value to the statement where the function was called
	if(x<y) return x;
	else return y;
}
int main(){
	int a;
	printf("ENTER 1ST NUMBER: ");
	scanf("%d", &a);
	int b;
	printf("ENTER 2ND NUMBER: ");
	scanf("%d", &b);
	
	int z=MIN(a,b);         //Storing the returned value in a new variable named z
	printf("The minimum of the two numbers is %d", z);
	return 0;
}