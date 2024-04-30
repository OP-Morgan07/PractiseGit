#include<stdio.h>
int main(){
    int y;
    printf("ENTER A NUMBER: ");
    scanf("%d", &y);
    if(y>99 && y<1000)
    printf("IT IS A THREE DIGIT NUMBER");
    else
    printf("IT IS NOT A THREE DIGIT NUMBER");
    return 0;
}