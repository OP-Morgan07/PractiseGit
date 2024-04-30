#include<stdio.h>
int isTriangular(int n);
int main(){
	int n;
	printf("ENTER THE VALUE OF n: ");
	scanf("%d", &n);
	
	int x= isTriangular(n);
	
	if(x==1) printf("THE NUMBER %d IS TRIANGULER", n);
	else printf("THE NUMBER %d IS NOT TRIANGULER", n);
	return 0;
}
int isTriangular(int n){
	int sum=0;
	int x;
	for(int i=1 ;i<=n;i++){
		sum=sum+i;
		if(sum==n){
			x=1;
			break;
	}
	else if(sum>n) {
		x=0;
		break;
	
	}
	
}
return x;
}