#include<stdio.h>
int main(){
   int n;
   printf("ENTER A NUMBER: ");
   scanf("%d", &n);

   int ld,sum=0;
   while(n!=0){
    ld=n%10;
    n=n/10;
    sum=sum+ld;
   }
   printf("THE SUM OF DIGITS IS %d", sum);
   return 0;
}