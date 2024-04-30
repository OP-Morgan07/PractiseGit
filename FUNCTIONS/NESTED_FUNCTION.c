#include<stdio.h>
void CHINA(){
	printf("You are in CHINA\n");
}
void JAPAN(){
	printf("You are in JAPAN\n");
	CHINA();
	
}
void INDIA(){
	printf("You are in INDIA\n");
	JAPAN();
}
int main(){
	printf("You are in main\n");
	INDIA();
	return 0;
}