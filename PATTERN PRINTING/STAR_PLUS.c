#include<stdio.h>             //FOR THIS n input can only be odd because of the pattern
int main(){
	int n;
	printf("ENTER n(odd): ");
	scanf("%d", &n);
	
	for(int i=1 ; i<=n ; i++){
		for(int j=1; j<=n; j++){
			if(j==n/2+1 || i==n/2+1)
			printf("* ");
			else
			printf("  ");
			
		}
		printf("\n");
	}
	return 0;
}