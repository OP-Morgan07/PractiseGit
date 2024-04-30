#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	char str[50];
	printf("ENter the string: ");
	gets(str);
	int n=strlen(str);
	int x=0;
	
	char counted[50];
	for(int i=0; i<=n-1; i++){
		bool flag=false;
		int count =0;
		for(int j=0; j<x; j++){
			if(str[i]==counted[j]) flag= true;
		}
		if(flag==true) continue;
		
		for(int j=0; j<=n-1; j++){
			if(str[i]==str[j]) count++;
		}
		counted[x] = str[i];
		x++;
		printf("%c occurs %d times\n", str[i], count);
		
	}
	return 0;
}