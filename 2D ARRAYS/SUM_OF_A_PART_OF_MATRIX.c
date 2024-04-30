#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d", &n);
	int m;
	printf("ENTER THE NUMBER OF COLUMNS: ");
	int arr[n][m];
	for(int i=0; i<=n-1; i++){
		for(int j=0; j<=m-1; j++){
			scanf("%d", &arr[i][j]);
		}
	}
		for(int i=0; i<=n-1; i++){
		for(int j=0; j<=m-1; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	int L1,R1;
	printf("ENTER THE 1ST COORDINATES: ");
	scanf("%d %d", &L1,&R1);
		int L2,R2;
	printf("ENTER THE 2ND COORDINATES: ");
	scanf("%d %d", &L2,&R2);
	int sum=0;
	for(int i=L1; i<=L2; i++){
		for(int j=R1; j<=R2; j++){				
			sum+=arr[i][j];
			
		}
	}
	printf("THE SUM OF ELEMENTS BETWEEN THE TWO POINTS IS: %d", sum);
	
	
	return 0;
}