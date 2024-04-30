#include<stdio.h>
int max(int arr[], int n);
int main(){
	int n;
	printf("ENTERR THE SIZE OF THE ARRAY: ");
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<=n-1; i++){
		scanf("%d", &arr[i]);
	}
	int z= max(arr,n-1);
	printf("THE GREATEST ELEMENT IN THE GIVEN ARRAY IS: %d", z);
	return 0;
}
int max(int arr[], int n){    //n can be said as the number of elements left in the array. We are dividing the problem into smaller problems first its max(n) then max(n-1) and so on
	if (n==0) return arr[n];
	int possible_max = max(arr, n-1);
	if(arr[n]>=possible_max) return arr[n];
	else return possible_max;
	
}