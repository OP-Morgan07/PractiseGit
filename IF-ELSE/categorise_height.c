#include<stdio.h>
int main(){
    int x;
    printf("ENTER YOUR HEIGHT IN (CM): ");
    scanf("%d", &x);
    if(x<=150)
    printf("DWARF");
    else {
        if(x>=165) printf("TALL");
        else printf("AVERAGE");

    }
    return 0;
}