#include<stdio.h>
//STAIR PARTH 1- only 1 stair at a time or two stairs at a time are allowed
int stair(int n){
	if(n==1) return 1;
	else if(n==2) return 2;
	int x= stair(n-1) + stair(n-2);        //Value given inside function represents the number of stairs that are left to climb
	return x;
}
int main(){
	int n;
	printf("enter the number of stairs: ");
	scanf("%d", &n);
	
	int x=stair(n);
	printf("The number of ways to go up the %d stairs is %d", n,x);
	return 0;
}