#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("ENTER n: ");
	scanf("%d", &n);
	int x,a=1,sum=0;
	
	for(int i=1; i<=n; i++){
		if(i==n)printf(" %d ",a);
		else printf(" %d +",a);
	   x=pow(10,i);         //POWER function pow(x,y) is x to the power y. We need to include math.h library for it
	   sum=sum+a;
	   a=a+x;
	   
	   
	   
	   
	}
	printf("\nTHE SUM OF THE FIRST n TERMS OF THE SERIES IS: %d", sum);
	return 0;
}