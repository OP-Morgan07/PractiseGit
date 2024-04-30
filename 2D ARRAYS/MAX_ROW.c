#include<stdio.h>
#include<limits.h>
int max(int r,int sum[r]){
	int n=INT_MIN;
	int x;
	for(int i=0; i<=r-1; i++){
		
			if(sum[i]>n){
			 n=sum[i];
			 x=i;
		}
		
	}
	return x;
}
int main(){
	int r;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d", &r);
	int c;
	printf("ENTER THE NUMBER OF COLUMNS: ");
	scanf("%d",&c);
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
	
	int sum[r];
	
	for(int i=0; i<=r-1;i++){
		sum[i]=0;
		for(int j=0; j<=c-1; j++){
			sum[i]+=arr[i][j];
		}
	}
	int n=max(r,sum);
	for(int i=0; i<=c-1; i++){
		printf("%d ", arr[n][i]);
	}
	
	return 0;
}