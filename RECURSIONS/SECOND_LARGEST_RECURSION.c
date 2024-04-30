#include<stdio.h>
int max(int arr[10], int n);
int smax(int arr[], int max, int n);
int main(){
	int n;
	printf("ENTERR THE SIZE OF THE ARRAY: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<=n-1; i++){
		scanf("%d", &arr[i]);
	}
	int z= max(arr,n-1);
	int x= smax(arr,z,n-1);
	printf("THE SECOND GREATEST ELEMENT IN THE GIVEN ARRAY IS: %d", x);
	return 0;
}
int max(int arr[], int n){    //n can be said as the number of elements left in the array. We are dividing the problem into smaller problems first its max(n) then max(n-1) and so on
	if (n==0) return arr[n];
	int possible_max = max(arr, n-1);
	if(arr[n]>=possible_max) return arr[n];
	else return possible_max;
	
}
int smax(int arr[], int max, int n){
	if(n==0 ) return arr[n];
	int x= smax(arr,max,n-1);
	
	if(arr[n] > x && arr[n]!=max) return arr[n];
	else if(arr[n] < x && x!=max) return x;
}