#include<stdio.h>
void swap(int* x, int* y){
    // int temp=*x;
    // *x=*y;              //Third variable method
    // *y=temp;
    // return;
    *x=*x + *y;          //Without third variable method
    *y=*x - *y;   
    *x= *x - *y;

}
int main(){
    int x;
    printf("ENTER 1ST NUMBER: ");
    scanf("%d", &x);
    int y;
    printf("ENTER 2ND NUMBER: ");
    scanf("%d", &y);
    printf("%d %d\n", x,y);
    swap(&x,&y);           //Passing the address is called PASS BY REFERENCE.
    printf("%d %d", x,y);
    return 0;

}