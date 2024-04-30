#include<stdio.h>
#include<limits.h>
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
		int n=INT_MIN;
		for(int i=0; i<=r-1; i++){
			for(int j=0; j<=c-1; j++){
				if(arr[i][j]>n) n=arr[i][j];
			}
			
		}
		printf("THE MAXIMUM ELEMENT IN THE MATRIX IS: %d", n);
		return 0;
}
