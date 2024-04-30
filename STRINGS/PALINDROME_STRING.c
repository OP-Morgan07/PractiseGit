#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	char str[30];
	printf("ENTER THE STRING: ");
	gets(str);
	int n= strlen(str);
	int i= 0;
	int j= n-1;
	bool flag=true;
	while(i<j){
		if(str[i]!=str[j]) {
			flag= false;
			break;
		}
		i++;
		j--;
	}
	if(flag==true) printf("THE PHRASE ENTERED IS A PALINDROME");
	else printf("THE PHRASE ENTERED IS NOT A PALINDROME");
	return 0;
}