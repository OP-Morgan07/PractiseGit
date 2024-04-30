#include<stdio.h>
int main(){
	int m;
	printf("ENTER NUMBER OF ROWS: ");
	scanf("%d",&m);
	int n;
	printf("ENTER NUMBER OF COLUMNS: ");
	scanf("%d",&n);
	
	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			if(i==1 || j==1 || i==m || j==n)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
		
	}
	return 0;
}