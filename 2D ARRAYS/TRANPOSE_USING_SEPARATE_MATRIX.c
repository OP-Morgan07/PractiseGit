#include<stdio.h>
int main(){
		int r;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d", &r);
	int c;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d", &c);
	int arr[r][c];
	for(int i=0;i<=r-1;i++){
			for(int j=0; j<=c-1; j++){
		
				scanf("%d", &arr[i][j]);
			}
		}
		for(int i=0;i<=r-1;i++){
			for(int j=0; j<=c-1; j++){
		
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	int brr[c][r];
	
		for(int i=0; i<=r-1; i++){
			for(int j=0; j<=c-1; j++){
				brr[j][i]=arr[i][j];
			}
		}
		for(int i=0 ; i<=c-1; i++){
			for(int j=0; j<=r-1; j++){
				printf("%d ", brr[i][j]);
			}
			printf("\n");
		}
	return 0;
}