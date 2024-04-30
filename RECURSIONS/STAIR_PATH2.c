#include <stdio.h>
//STAIR PATH2- Single,double or triple steps allowed
	int stair(int n){
	if(n==1) return 1;
	else if(n==2) return 2;
	else if(n==3) return 4;
	int x= stair(n-1) + stair(n-2)+ stair(n-3);        //Value given inside function represents the number of stairs that are left to climb
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