#include<stdio.h>
int a=6;                     //This a is global for the both the functions
void swap(){
	a=7;            //Here the global a is used to execute the function. Its value is changed from 6 to 7
	return;
}
int main(){
	int a=70;         //If we exclude this line then the output would be  6 7 after swapping as there is only one a in the code main function also uses that a
	printf("%d\n", a);  //Local variable of a particular function has more priority than the globally declared variable, so here 70 is printed
	swap();
	printf("%d", a); //Here also 70 is printed because swapping takes place with the global a.
	return 0;
}