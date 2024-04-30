#include<stdio.h>
//Benefit of this method is that we need only two variables for this.
int maze2(int n, int m){
	int rightWays=0;
	int downWays=0;
	if(n==1 && m==1) return 1;
	if(n==1) { //Cant go down
	rightWays += maze2(n,m-1);
	}
	if(m==1){ //Cant go right
	downWays += maze2(n-1,m);
	}
	if(n>1 && m>1){ 
	rightWays+= maze2(n,m-1);
	downWays+= maze2(n-1,m);
}
	int totalWays = rightWays + downWays;
	return totalWays;
	
}
int main(){
	int n;
	printf("ENTER THE NUMBER OF ROWS OF THE MAZE: ");
	scanf("%d", &n);
	int m;
	printf("ENTER THE NUMBER OF COLUMNS OF THE MAZE: ");
	scanf("%d", &m);
	
	int x= maze2(n,m);
	printf("%d", x);
	return 0;
}