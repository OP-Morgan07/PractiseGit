#include<stdio.h>
int main(){
int x;
x=100;
int* z=&x;
printf("%d\n", *z);          //* is called derefernce operator
printf("%d", *&x);         //The derefernence operator tells to go to z where the address of x is stored and goes to that address and prints the value at that address.

return 0;
}