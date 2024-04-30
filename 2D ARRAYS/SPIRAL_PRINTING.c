#include<stdio.h>
int main(){
		int r;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d", &r);
	int c;
	printf("ENTER THE NUMBER OF COLUMNS: ");
	scanf("%d", &c);
	int arr[r][c];
	for(int i=0 ;i<=r-1; i++){
		for(int j=0 ; j<=c-1; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i=0 ; i<=r-1; i++){
		for(int j=0; j<=c-1; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	int minr=0;  //Minimum row
	int maxr=r-1; //Maximum row
	int minc=0;// Minimun column
	int maxc=c-1;//Maximum column
	int tne= r*c; //Total number of elements
	int count=0;
	while(count<tne){
		//Print the minimum row
		for(int i=minc ; i<=maxc; i++){
			printf("%d ", arr[minr][i]);
			count++;
		}
		minr ++;
		if(count>=tne) break;
		//Print the maximum column
		for(int i=minr; i<=maxr; i++){
			printf("%d ", arr[i][maxc]);
			count++;
		}
		maxc --;
		if(count>=tne) break;
		//Print the maximum row (but in reverse)
		for(int i=maxc;i>=minc; i--){
			printf("%d ", arr[maxr][i]);
			count++;
		}
		maxr --;
		if(count>=tne) break;
		//Print the minimum column (but in reverse)
		for(int i=maxr; i>=minr;i--){
			printf("%d ", arr[i][minc]);
			count++;
		}
		minc ++;
		if(count>=tne) break;   //Not required it is as it is checking before starting the outer loop again
		
	}
	return 0;
}