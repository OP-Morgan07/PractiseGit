#include<stdio.h>

void ODDEVEN(int a){       //a is called formal parameter. It can also be declared as x again, as x from main function is different from the x in the called function
	if(a%2==0) printf("IT IS AN EVEN NUMBER");
	else printf("IT IS AN ODD NUMBER");
	
}
int main(){
	int x;
	printf("ENTER A NUMBER: ");
	scanf("%d", &x);
	ODDEVEN(x);      //x is called actual parameter. Its value is passed to the formal paramter used in the called function, to execute the function. This is called pass by value.
	return 0;
}