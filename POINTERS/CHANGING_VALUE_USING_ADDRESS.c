#include<stdio.h>
int main(){
    int x=9;
    int* z=&x;
    printf("%d\n", x);
    //changing
    *z=100;          //Goes to the address stored(i.e of x) in z reads the value present and then changes its value.
    printf("%d", x);
    return 0;            //Remember that only the value changes the address remains same.
}