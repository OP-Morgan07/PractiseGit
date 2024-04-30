#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);

    int i=0,ld,r=0;
    while(n!=0){               
        ld=n%10;               
        r=r*10;
        r=r+ld;
        n=n/10;

    }
    printf("THE REVERSE OF THE NUMBER IS:%d", r);
    return 0;

}