#include<stdio.h>
int main(){
	int n;
	printf("ENTER n: ");
	scanf("%d", &n);
	int x;

	for (int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			 x=64+i;
			char ch=(char)x;
			printf("%c ", ch);   //EXPLICIT TYPECASTING
			
		}
		printf("\n");
	}
	return 0;
	
	
	
}