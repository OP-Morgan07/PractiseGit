#include<stdio.h>
int main(){
	int n;
	printf("ENTER n: ");
	scanf("%d", &n);
	
	
		for(int j=1; j<=2*n-1; j++){
			printf("* ");
		
		}
			printf("\n");
	for(int i=1;i<=n-1;i++){
		for(int j=1; j<=n-i; j++){
			printf("* ");
		}
		for(int j=1; j<=2*i-1; j++){
			printf("  ");
		}
		for(int j=1; j<=n-i; j++){
			printf("* ");
		}
		printf("\n");
	}
	int x=2*n-3;
     for(int i=1;i<=n-1;i++){
     	
		for(int j=1; j<=i; j++){
			printf("* ");
		}
		for(int j=1; j<=x; j++){
			printf("  ");
			
		}
		
		for(int j=1; j<=i; j++){
			printf("* ");
		}
		x=x-2;
		printf("\n");
	}	
	for(int j=1; j<=2*n-1; j++){
			printf("* ");
		
		}
	
	return 0;
}