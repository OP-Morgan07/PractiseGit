#include<stdio.h>
int main(){
	int n;
	printf("ENTER THE NUMBER: ");
	scanf("%d", &n);
	
	int ld,sum;
	while(n>9){
	sum=0;
	while(n!=0){
		ld=n%10;
		n=n/10;
		sum=sum+ld;
				
		}
		n=sum;
}


			
if(n<10)	printf("THE DIGITAL ROOT IS: %d", n);
			
			
			return 0;
	
		
}