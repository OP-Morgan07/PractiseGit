#include<stdio.h>
int main(){
    int a=90;
    int* x= &a; //x variable of pointer datatype is formed to store address of a

    int** y=&x; //y variable of pointer datatype is formed to store address of x
    printf("%d\n", a);
    printf("%p\n", x);
    printf("%d\n", *x);
    printf("%d\n", **y);      //Go to the address stored in y i.e of x read the address of x . Then again go to the address stored in x i.e of a and go to the address of a and print the value.
    return 0;
}