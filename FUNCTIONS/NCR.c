#include<stdio.h>
int FACT(int n){
	int f=1;
	for(int i=1;i<=n;i++){
		f=f*i;
	}
	return f;
}
int NCR(int a, int b){
	return FACT(a)/(FACT(b)*FACT(a-b));
}
int main(){
	int x;
	printf("ENTER 1ST NUMBER: ");
	scanf("%d", &x);
	int y;
	printf("ENTER 2ND NUMBER: ");
	scanf("%d", &y);
	
	int z=NCR(x,y);
	printf("%d", z);
	return 0;
}