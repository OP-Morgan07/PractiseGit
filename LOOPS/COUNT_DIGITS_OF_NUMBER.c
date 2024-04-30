#include<stdio.h>
int main(){ 
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
    int r=0;
     while(n!=0){            //After every division by 10 one digit will vanish as n is in integer datatype until n is 0 and simultaneously we will keep increasing the count.
        n=n/10;
        r++;

     }
     printf("THE NUMBER HAS %d DIGITS", r);
     return 0;
}