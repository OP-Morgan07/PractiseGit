#include<stdio.h>
int main(){
    int x;
    printf("ENTER A NUMBER : ");
    scanf("%d", &x);
    int ld,ld1,sum=0;
    while(x!=0){
        ld=x%100;
        ld1=ld/10;
        x=x/100;
        sum=sum+ld1;
    }
    printf("THE SUM OF ALL EVEN DIGITS IS %d ", sum);
    return 0;
}