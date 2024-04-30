#include<stdio.h>
int fact(int a){
	int f=1;
	for(int i=1; i<=a; i++){
		f=f*i;
		
	}
	return f;
}
int ncr(int x, int y){
	return fact(x)/(fact(y)*fact(x-y));
}
int main(){
	int n;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d", &n);
	
	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=n-i; j++){
			printf("  ");
		}
		int a=0; 
		for(int j=0; j<=2*i; j++){
		       		
			
			 if(j%2==0) {
			 printf("%d", ncr(i,a));
			 a++;
		}
			else printf("  ");
			
		}
		printf("\n");
	}
	return 0;
}