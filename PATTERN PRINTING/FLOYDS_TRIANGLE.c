#include<stdio.h>
int main(){
	int n;
	printf("ENTER n: ");
	scanf("%d", &n);
	int a=1;
	for (int i=1; i<=n; i++){
		
		for (int j=1; j<=i; j++){
			printf("%d ",a);                            //Similiarly flyods square can be done
			a++;
			
		}
		printf("\n");
		
	}
	return 0;
}