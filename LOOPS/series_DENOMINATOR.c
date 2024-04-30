#include<stdio.h>
int main(){
	int n;
	printf("ENTER n: ");
	scanf("%d", &n);
	float sum=0;
	int x=0;
	for(int i=1; i<=n; i++){
		x=x+i;
		sum=sum+ 1/(float)x ;
	}
	printf("THE SUM OF THE FIRST n TERMS OF THE SERIES IF: %f", sum);
	return 0;
}