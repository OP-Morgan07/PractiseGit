#include<stdio.h>     //gp 1,2,4,8,.... upto n  terms 
int main(){
int n;
printf("ENTER n: ");
scanf("%d", &n);

int f=1;
for(int i=1 ; i<=n ; i++){
    printf("%d\n", f);
    f=f*2;
}
return 0;
}
