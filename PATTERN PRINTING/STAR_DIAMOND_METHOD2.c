#include<stdio.h>
int main(){
	int n;
	printf("ENTER n: ");
	scanf("%d", &n);
	
	//In method 1 we did upper half and lower half differently ,in this we do together
	int nsp,nst;
	nsp=n-1;
	nst=1;
	for(int i=1;i<=2*n-1; i++){
		for(int j=1; j<=nsp;j++){
			printf("  ");
		}
		for(int j=1; j<=nst; j++){
			printf("* ");
			
		}
		printf("\n");
		if(i<n)
		{
			nsp--;
			nst=nst+2;
		}
		else   //i>=n
		{
			nsp++;
			nst=nst-2;
		}
	}
	return 0;
}