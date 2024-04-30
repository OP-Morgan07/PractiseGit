#include<stdio.h>
int main(){
	int n;
	printf("ENTER n:");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		int x=1;
		for(int j=1 ; j<=i ; j++){
			
			if(i%2!=0) printf("%d ",j);
			else 
			{ printf("%c ", 64+j);
			x++;
			}
			
		}
	
		printf("\n");
		
	}
	return 0;
}