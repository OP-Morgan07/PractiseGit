#include<stdio.h>
int main(){
    int cp;
    int sp;   //cp is cost price and sp is selling price
    printf("ENTER THE SELLING PRICE:");
    scanf("%d",&sp);
    printf("ENTER THE COST PRICE:");
    scanf("%d",&cp);
    if(cp>sp) 
    printf("LOSS : %d",cp-sp);
    else
    printf("PROFIT :%d",sp-cp);
    return 0;
}