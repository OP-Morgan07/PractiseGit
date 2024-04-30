#include<stdio.h>
void transpose(int r, int c, int arr[r][c]){
	for(int i=0; i<=r-1; i++){
		for(int j=i+1; j<=c-1; j++){
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]= temp;
		}
	}
}
int main(){
	int r;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d", &r);
	int c;
	printf("ENTER THE NUMBER OF COLUMNS: ");
	scanf("%d", &c);
	int arr[r][c];
	for(int i=0; i<=r-1; i++){
		for(int j=0; j<=c-1; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i=0; i<=r-1; i++){
		for(int j=0; j<=c-1; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	transpose(r,c,arr);
	for(int i=0;i<=c-1; i++){
	for(int j=0; j<=(c/2)-1; j++){   //Also can be seen as reversing each row after transposing
			
			
				int temp=arr[i][j];
				arr[i][j]=arr[i][c-1-j];
				arr[i][c-1-j]= temp;
			
		}
		printf("\n");
		}
		for(int i=0; i<=c-1; i++){
		for(int j=0; j<=r-1; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}