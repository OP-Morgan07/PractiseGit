#include<stdio.h>
int main(){
	int n;
	printf("ENTER n: ");
	scanf("%d", &n);
	int nnn=2*n-1;
	//UPPER HALF
	for(int i=1; i<=n; i++){
		int x= n;
		for(int j=1; j<=i-1; j++){
		printf("%d ", x);
		x--;	
		}
		
		
		for(int j=1; j<=nnn; j++){
			printf("%d ", x);
			
		}
		nnn-=2;
		x++;
		for(int j=1; j<=i-1; j++){
		printf("%d ", x);
		x++;	
		}
		printf("\n");
		}
		//LOWER HALF
		int nnn1=3;
		for(int i=1; i<=n-1; i++){
			int y=n;
			for(int j=1; j<=n-1-i; j++){
				printf("%d ", y);
				y--;
			}
			for(int j=1; j<=nnn1; j++){
				printf("%d ", y);
			}
			nnn1+=2;
			y++;
			for(int j=1; j<=n-1-i; j++){
				printf("%d ", y);
				y++;
			}
			printf("\n");
		}
	return 0;
}