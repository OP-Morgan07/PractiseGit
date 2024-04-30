#include<stdio.h>
#include<string.h>
int main(){
	
	char str[5];
	
	gets(str);
	int x= strlen(str);
	int count=0;
	for(int i=0; i<=x-1; i++){
		count++;
	}
	printf("%d", count);
	return 0;
}