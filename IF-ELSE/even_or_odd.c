#include<stdio.h>
int main(){
    int x;
    printf("ENTER A NUMBER : ");
    scanf("%d", &x);
    if(x%2==0) {   //giving curly brackets isnt compulsory for only one statement but for multipke statements in if command its compulsory
        printf("Its is an EVEN number");
    }
    if(x%2!=0){
        printf("Its is a odd number");
    }
    return 0;
}