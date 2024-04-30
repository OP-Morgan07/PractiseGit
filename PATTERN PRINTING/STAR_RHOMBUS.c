#include<stdio.h>
int main(){
	int n;
	printf("ENTER n: ");
	scanf("%d", &n);
	//METHOD 1 THREE LOOPS
//	for(int i=1; i<=n; i++){
//		for(int j=1; j<=n-i; j++){
//			printf("  ");
//		}
//		for(int k=1;k<=i;k++){
//			printf("* ");
//		}
//		for(int l=1;l<=n-i;l++){
//			printf("* ");
//		}
//		printf("\n");
//	}

    //METHOD 2 TWO LOOPS
    for(int i=1; i<=n; i++){
    	for(int j=1;j<=n-i;j++){
    		printf("  ");
		}
		for(int k=1;k<=n;k++){            //Printing a adjacent square
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}