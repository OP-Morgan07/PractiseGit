#include<stdio.h>
int main(){
	int n;
	printf("ENTER n: ");
	scanf("%d", &n);
	
	//METHOD 1(BAD METHOD)
//	for(int i=1; i<=n; i++){
//		for(int j=1; j<=n; j++){
//			if(i+j>=n+1)
//			printf("* ");
//			else
//			printf("  ");
//			
//		}
//		printf("\n");
//		
//	}

   //METHOD 2 (GOOD METHOD)          //TWO LOOPS INSIDE ONE
   for(int i=1;i<=n; i++){
   	for(int j=1; j<=n-i; j++){
   		
   		printf("  ");
	   }
	for(int k=1; k<=i; k++){
		
		printf("* ");
	}
	printf("\n");   
   }
	return 0;
}