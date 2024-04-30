#include<stdio.h>
int main (){
	
	char str[5]={'o','m'};
	char str1[5]="om";
	int n= sizeof(str)/sizeof(str[0]);
	int n1= sizeof(str1)/sizeof(str1[0]);
	int i=0;
	printf("%d", n);
	while(str[i]!='\0'){
		printf("%c", str[i]);
		i++;
	}
	printf("%d", n1);
	int j=0;
	while(str[j]!='\0'){
		printf("%c", str[j]);
		j++;
	}
	
	return 0;
}