#include<stdio.h>
int fact(int x){
	int f=1;
	for(int i=1; i<=x; i++){
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
	
	for(int i=0; i<=n; i++){
		for(int j=0;j<=i; j++){
			printf("%d ", ncr(i,j));
		}
		printf("\n");
		
	}
	return 0;
}