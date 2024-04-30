#include<stdio.h>
int main(){
	FILE * fp=NULL;
	fp= fopen("p2.txt","a");
	
	fputs("I AM PRESENT", fp);
	fclose(fp);
	return 0;
}