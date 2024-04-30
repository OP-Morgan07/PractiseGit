#include<stdio.h>
int main(){
	int n;
	printf("ENTER n:");
	scanf("%d", &n);
	int a;
	
	for (int i=1; i<=n; i++){
		a=1;
		for(int j=1; j<=n; j++){
			printf("%d ", a);
			a=a+2;
		}
		printf("\n");
	}
	return 0;
}