#include<stdio.h>
int main(){
	FILE * fp=NULL;
	fp= fopen("p1.txt","r");
	char str[50];
	while((fgets(str,50,fp))!=EOF){
		printf("%s", str);
	}
	return 0;
}