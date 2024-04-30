#include<stdio.h>
void swap(int r,int c,int arr[r][c],int i,int j){
	int temp=arr[i][j];
	arr[i][j]=arr[j][i];
	arr[j][i]=temp;
	return ;
}
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
		for(int i=0; i<=r-1; i++){
			for(int j=i+1; j<=c-1; j++){
				swap(r,c,arr,i,j);
			}
		}
		printf("\n");
		for(int i=0;i<=c-1;i++){
			for(int j=0; j<=r-1; j++){
		
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	return 0;
}