#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);

    int i=n-1;
     while(i>=1){
        n=n*i;
        i--;

     }
     printf("THE FACTORIAL IS %d", n);
     return 0;
}