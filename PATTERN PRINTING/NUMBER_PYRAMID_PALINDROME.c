#include<stdio.h>
int main(){
	int n;
	printf("ENTER n: ");
	scanf("%d",&n);                    //CAN BE DONE BY NORMAL METHOD OR BY NST NSP METHOD
	int nsp=n-1;
	int nst=1;
	int a;
	for(int i=1;i<=n;i++){
		a=0;
		for(int j=1; j<=nsp; j++){
			printf("  ");
			
		}
		for(int k=1;k<=nst;k++){
			
			if(k<=i){
				a++;
				printf("%d ", a);
			}
			else {
				a--;
				printf("%d ", a);
			}
			}
	
		nsp--;
		nst=nst+2;
		printf("\n");
		
		
	}
	return 0;
}
