#include<stdio.h>
int main(){
    int x;
    printf("WHAT IS YOUR BASIC(NET) SALARY(IN RS): ");
    scanf("%d", &x);
    int y;
    printf("WHAT IS YOUR HRA: ");
    scanf("%d", &y);
    int z;
    printf("WHAT IS YOUR DA: ");
    scanf("%d", &z);
    int a;
    printf("WHAT IS YOUR MA: ");
    scanf("%d", &a);
    int b;
    b=x-y-z-a;
    printf("YOUR GROSS SALARY IS %d", b);
    return 0;


}