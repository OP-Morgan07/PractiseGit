#include<stdio.h>
int main(){
    int B;
    printf("ENTER A NUMBER :");
    scanf("%d", &B);          //Can be done by normal method also and nested if-else also
    if(B%5==0 || B%3==0){
        if(B%15!=0)
        printf("THE CONDITION IS FOLLOWED");
        else
        printf("THE CONDITION ISNT FOLLOWED");
    }
    else 
    printf("THE CONDITION ISNT FOLLOWED");
    return 0;
    
}