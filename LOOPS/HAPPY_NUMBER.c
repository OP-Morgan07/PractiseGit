#include<stdio.h>
#include<math.h>
int main(){                                    //go  on adding the digits of the number till we get one
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);
    int sum,ld;

    while(sum!=1){
        sum=0;
    while(n!=0){
        ld=n%10;
        n=n/10;
        sum=sum+ pow(ld,2);
    }
    n=sum;
    if(sum<10 && sum!=1) break;
    
}
if(sum==1) printf("THE NUMBER IS A HAPPY NUMBER");
else printf("THE NUMBER IS NOT A HAPPY NUMBER");
return 0;
}