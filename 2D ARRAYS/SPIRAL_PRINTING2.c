#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE SIDE OF THE MATRIX: ");
	scanf("%d", &n);
	int arr[n][n];

	
	int minr=0;  //Minimum row
	int maxr=n-1; //Maximum row
	int minc=0;// Minimun column
	int maxc=n-1;//Maximum column
	int tne= n*n; //Total number of elements
	int count=0;
	int num=1;
	while(count<tne){
		//Print the minimum row
		for(int i=minc ; i<=maxc; i++){
			arr[minr][i]=num;
			count++;
			num++;
		}
		minr ++;
		if(count>=tne) break;
		//Print the maximum column
		for(int i=minr; i<=maxr; i++){
			arr[i][maxc]=num;
			count++;
			num++;
		}
		maxc --;
		if(count>=tne) break;
		//Print the maximum row (but in reverse)
		for(int i=maxc;i>=minc; i--){
			arr[maxr][i]=num;
			count++;
			num++;
		}
		maxr --;
		if(count>=tne) break;
		//Print the minimum column (but in reverse)
		for(int i=maxr; i>=minr;i--){
           arr[i][minc]=num;
			count++;
			num++;
		}
		minc ++;
		if(count>=tne) break;   //Not required it is as it is checking before starting the outer loop again
		
	}
	for(int i=0 ; i<=n-1; i++){
		for(int j=0; j<=n-1; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}