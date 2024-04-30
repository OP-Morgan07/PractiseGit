#include<stdio.h>
int main(){
    int x;
    printf("ENTER A NUMBER PLEASE:   ");
    scanf("%d", &x);
    if(x>=0)
    printf("the absolute value of x is : %d", x);
    if(x<0){
        x=x*-1;
        printf("The absolute value of x is :%d", x);
    }
    return 0;
}