#include<stdio.h>
int main(){
    float x;
    printf("ENTER A NUMBER : ");
    scanf("%f", &x);
    int f=(int)x;
    float a=(float)f;
    if(x-a>0){
    printf("The number is not an integer");
    }
    if(x-a==0){
    printf("The the number is an interger");
    }
    return 0;
}