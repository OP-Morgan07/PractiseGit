#include<stdio.h>
int main(){
	int n;                                  
	printf("ENTER n: ");
	scanf("%d", &n);
	//TWO LOOPS FOR UPPER HALF AND LOWER HALF
	
	//UPPER HALF
	
	int nsp=n-1;
	int nst=1;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=nsp; j++){
			printf("  ");
		}
		for(int j=1; j<=nst; j++){
			printf("* ");
		}
		
		nsp--;
		nst+=2;
		printf("\n");
	}
	
	//LOWER HALF
	
	nsp=1;
	nst=2*n-3;
	
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=nsp; j++){
			printf("  ");
		}
		for(int j=1; j<=nst; j++){
			printf("* ");
		}
		nsp++;
		nst-=2;
		printf("\n");
	}
	
	return 0;
	
}