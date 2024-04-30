#include<stdio.h>
int main(){                    //Printing fibonacci series and its sum
	int n;
	printf("ENTER A NUMBER: ");
	scanf("%d",&n);
	int a=0,b=1,c,sum=1;
	printf("%d+%d",a,b);
	
	for(int i=1; i<=n-2; i++){             //n-2 because we are printing the first two terms outside the loop 
		c=a+b;
		a=b;
		b=c;
		printf("+%d", c);
		sum=sum+c;
	}
	printf("\n THE SUM OF THE FIRST n TERMS OF THE SERIES IS : %d", sum);
	return 0;
}