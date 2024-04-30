#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	char s1[50];
	char s2[50];
	printf("ENTER THE FIRST STRING: ");
	gets(s1);
	printf("ENTER THE SECOND STRING: ");
	gets(s2);
	int n=strlen(s1);
	 bool flag=true;
	 int j=n-1;
	 if(flag==true){
	 
	for(int i=0; i<=n-1; i++){
		if(s1[i]!=s2[j]) {
		flag= false;
		break;
	}
		j--;
	}
}
if(flag==true) printf("THE STRING %s is rotation of %s", s1,s2);
else printf("NOT A ROTATION");
	return 0;
}