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
	int r1;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d", &r1);
	int c1;
	printf("ENTER THE NUMBER OF ROWS: ");
	scanf("%d", &c1);
	int arr1[r1][c1];
	for(int i=0;i<=r1-1;i++){
			for(int j=0; j<=c1-1; j++){
		
				scanf("%d", &arr1[i][j]);
			}
		}
		for(int i=0;i<=r1-1;i++){
			for(int j=0; j<=c1-1; j++){
		
				printf("%d ", arr1[i][j]);
			}
			printf("\n");
		}
		printf("\n");
			int arr2[r][c1]; 
		if(c!=r1) printf("INVALID MATRIX");
	      //NOTE: (i,j) element of the resultant matrix is obtained by sum of element by element multiplication of ith row of first matrix and jth column of second matrix
		else{
			
			for(int i=0; i<=r-1;i++){
			
			for(int j=0; j<=c1-1; j++){
				
				arr2[i][j]=0;
				
				for(int k=0; k<=c-1; k++){    //IMPORTANT TO SEE LOOP FROM WHERE TO WHERE
					arr2[i][j]+= arr[i][k]* arr1[k][j];
				}
				
		}
	}
		
		for(int i=0; i<=r-1; i++){
			for(int j=0; j<=c1-1; j++){
				printf("%d ", arr2[i][j]);
			}
			printf("\n");
		}
		
				
			}
		
	
	return 0;
}