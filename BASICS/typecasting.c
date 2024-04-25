#include<stdio.h>//question: take a integer x as input and print half of x (without changing its datatype)
int main(){
    int x;
    printf("enter a interger : ");
    scanf("%d" , &x);
    float f= (float)x; //This is typecasting. A new box is made named f of float datatype and x is stored in it which was of integer datatype so now x will act as float datatype. 
    printf("%f", f/2 ); //we can say now f=x
    return 0;

}
