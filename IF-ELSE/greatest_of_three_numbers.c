#include<stdio.h>
int main(){
    int x,y,z;
    printf("ENTER THREE NUMBERS: ");
    scanf("%d %d %d",&x,&y,&z);                                         //CAN BE DONE BY ONLY IF STATEMENTS IF WE INTAKE ONLY DISTINCT NUMBER
    if(x==y && x==z) printf("%d IS THE GREATEST", x);                   //ALSO CAN BE DONE BY NESTED IF-ELSE BUT ALSO FOR DISTINCT NUMBER ONLY
    else if(y>=x && y>=z) printf("%d IS THE GREATEST", y);              //FOR  DISTINCT AND EQUAL NUMBERS WE NEED TO USE ELSE-IF STATEMENT
    else if(z>=x && z>=y) printf("%d IS THE GREATEST", z);
    else if(x>=y && x>=z) printf("%d is the greatest", x);
    return 0;

     }