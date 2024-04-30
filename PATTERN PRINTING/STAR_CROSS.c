#include<stdio.h>
int main(){
	int n;
	printf("ENTER n(odd): ");          //For even we will get different pattern as for even their isnt a common point where the two lines meet
	scanf("%d",&n );
	
	for(int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
			if(i==j || j==n+1-i)
			printf("* ");
			else 
			printf("  ");
			
		}
		printf("\n");
	}
	return 0;
}