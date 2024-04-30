#include<stdio.h>
int main(){
    int x;
    printf("ENTER A NUMBER: ");
    scanf("%d", &x);
    if(x%3==0){           //this can also be done by directly checking divisibility by 15
        if(x%5==0)
        printf("THE NUMBER IS DIVISIBLE BY BOTH 5 AND 3");
        else 
        printf("THE NUMBER ISNT DIVISIBLE BY BOTH 5 AND 3");
    }
    else
    printf("THE NUMBER ISNT DIVISIBLE BY BOTH 5 AND 3");
    return 0;

}