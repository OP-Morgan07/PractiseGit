#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("ENTER n: ");
    scanf("%d", &n);

    bool flag= true;                        //flag is just variable Can be given anything 
    for(int i=2 ; i<=n/2 ; i++){
        if(n%i==0){
            flag=false;
            break;
        }

    }
    if(n==1) printf("THE NUMBER IS NEITHER PRIME NOR COMPOSITE");
    else if(flag==true) printf("THE NUMBER IS PRIME");
    else printf("THE NUMBER IS COMPOSITE ");
    return 0;

}