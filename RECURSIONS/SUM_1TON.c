#include<stdio.h> 
//PARAMETERIZED WAY
//void sum(int n, int s){
//	if(n==0){
//		printf("%d", s);
//		return ;
//	}
//	sum(n-1, s+n);
//	return ;
//}
//int main(){
//	int n;
//	printf("ENTER THE NUMBER: ");
//	scanf("%d", &n);
//	
//	sum(n,0);

//Return type method
int sum(int n){
	if(n==0) return 0;
	return n+sum(n-1);         //Or make variable and store in that and return that variable
}

int main(){
	int n;
	printf("ENTER THE NUMBER: ");
	scanf("%d", &n);
	
	int x=sum(n);
	printf("%d", x);
	return 0;
}