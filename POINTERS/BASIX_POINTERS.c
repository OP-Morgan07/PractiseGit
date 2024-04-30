#include<stdio.h>
int main(){
	int x=9;
	int* z=&x;               //int* is the special datatype used to store the hexadecimal address. It is called pointer datatype. Also can be written as int *z. But the variable is z remember that
	printf("%p\n", &x);           //%p is the format specifier for printing the address. &x reads "address of x"
	printf("%p", z);              //Everytime we run the code to print the address we get new address, as compiler stores randomly everytime
	return 0;
}