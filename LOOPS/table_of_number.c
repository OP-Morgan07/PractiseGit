#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d", &n);

    for(int i=1 ; i<=10 ; i++){
        printf("%d x %d= %d\n", i,n,i*n);
    }
    return 0;
}