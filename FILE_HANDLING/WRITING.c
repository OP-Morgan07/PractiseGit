#include<stdio.h>
int main(){
	FILE * fp= NULL;
	fp= fopen("p2.txt", "a");
	fprintf(fp,"\nI am present");
	return 0;
	
}